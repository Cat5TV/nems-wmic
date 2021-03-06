/* 
   Unix SMB/CIFS implementation.
   test suite for atsvc rpc operations

   Copyright (C) Tim Potter 2003
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include "includes.h"
#include "torture/torture.h"
#include "librpc/gen_ndr/ndr_atsvc_c.h"
#include "torture/rpc/rpc.h"

static bool test_JobGetInfo(struct dcerpc_pipe *p, struct torture_context *tctx, uint32_t job_id)
{
	NTSTATUS status;
	struct atsvc_JobGetInfo r;

	r.in.servername = dcerpc_server_name(p);
	r.in.job_id = job_id;

	status = dcerpc_atsvc_JobGetInfo(p, tctx, &r);

	torture_assert_ntstatus_ok(tctx, status, "JobGetInfo failed");

	return true;
}

static bool test_JobDel(struct dcerpc_pipe *p, struct torture_context *tctx, uint32_t min_job_id,
			uint32_t max_job_id)
{
	NTSTATUS status;
	struct atsvc_JobDel r;

	r.in.servername = dcerpc_server_name(p);
	r.in.min_job_id = min_job_id;
	r.in.max_job_id = max_job_id;

	status = dcerpc_atsvc_JobDel(p, tctx, &r);

	torture_assert_ntstatus_ok(tctx, status, "JobDel failed");

	return true;
}

static bool test_JobEnum(struct torture_context *tctx, struct dcerpc_pipe *p)
{
	NTSTATUS status;
	struct atsvc_JobEnum r;
	struct atsvc_enum_ctr ctr;
	uint32_t resume_handle = 0, i;
	bool ret = true;

	r.in.servername = dcerpc_server_name(p);
	ctr.entries_read = 0;
	ctr.first_entry = NULL;
	r.in.ctr = r.out.ctr = &ctr;
	r.in.preferred_max_len = 0xffffffff;
	r.in.resume_handle = r.out.resume_handle = &resume_handle;

	status = dcerpc_atsvc_JobEnum(p, tctx, &r);

	torture_assert_ntstatus_ok(tctx, status, "JobEnum failed");

	for (i = 0; i < r.out.ctr->entries_read; i++) {
		if (!test_JobGetInfo(p, tctx, r.out.ctr->first_entry[i].job_id)) {
			ret = False;
		}
	}

	return ret;
}

static bool test_JobAdd(struct torture_context *tctx, struct dcerpc_pipe *p)
{
	NTSTATUS status;
	struct atsvc_JobAdd r;
	struct atsvc_JobInfo info;

	r.in.servername = dcerpc_server_name(p);
	info.job_time = 0x050ae4c0; /* 11:30pm */
	info.days_of_month = 0;	    /* n/a */
	info.days_of_week = 0x02;   /* Tuesday */
	info.flags = 0x11;	    /* periodic, non-interactive */
	info.command = "foo.exe";
	r.in.job_info = &info;

	status = dcerpc_atsvc_JobAdd(p, tctx, &r);

	torture_assert_ntstatus_ok(tctx, status, "JobAdd failed");

	/* Run EnumJobs again in case there were no jobs to begin with */

	if (!test_JobEnum(tctx, p)) {
		return false;
	}

	if (!test_JobGetInfo(p, tctx, *r.out.job_id)) {
		return false;
	}

	if (!test_JobDel(p, tctx, *r.out.job_id, *r.out.job_id)) {
		return false;
	}

	return true;
}

struct torture_suite *torture_rpc_atsvc(void)
{
	struct torture_suite *suite = torture_suite_create(
										talloc_autofree_context(),
										"ATSVC");
	struct torture_tcase *tcase;
	
	tcase = torture_suite_add_rpc_iface_tcase(suite, "atsvc", 
											  &dcerpc_table_atsvc);

	torture_rpc_tcase_add_test(tcase, "JobEnum", test_JobEnum);
	torture_rpc_tcase_add_test(tcase, "JobAdd", test_JobAdd);

	return suite;
}
