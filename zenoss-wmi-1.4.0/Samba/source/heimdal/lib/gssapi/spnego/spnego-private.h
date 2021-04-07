/* This is a generated file */
#ifndef __spnego_private_h__
#define __spnego_private_h__

#include <stdarg.h>

gssapi_mech_interface
__gss_spnego_initialize (void);

OM_uint32
_gss_spnego_accept_sec_context (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	const gss_cred_id_t /*acceptor_cred_handle*/,
	const gss_buffer_t /*input_token_buffer*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	gss_name_t * /*src_name*/,
	gss_OID * /*mech_type*/,
	gss_buffer_t /*output_token*/,
	OM_uint32 * /*ret_flags*/,
	OM_uint32 * /*time_rec*/,
	gss_cred_id_t *delegated_cred_handle );

OM_uint32
_gss_spnego_acquire_cred (
	OM_uint32 */*minor_status*/,
	const gss_name_t /*desired_name*/,
	OM_uint32 /*time_req*/,
	const gss_OID_set /*desired_mechs*/,
	gss_cred_usage_t /*cred_usage*/,
	gss_cred_id_t * /*output_cred_handle*/,
	gss_OID_set * /*actual_mechs*/,
	OM_uint32 * time_rec );

OM_uint32
_gss_spnego_add_cred (
	 OM_uint32 * /*minor_status*/,
	const gss_cred_id_t /*input_cred_handle*/,
	const gss_name_t /*desired_name*/,
	const gss_OID /*desired_mech*/,
	gss_cred_usage_t /*cred_usage*/,
	OM_uint32 /*initiator_time_req*/,
	OM_uint32 /*acceptor_time_req*/,
	gss_cred_id_t * /*output_cred_handle*/,
	gss_OID_set * /*actual_mechs*/,
	OM_uint32 * /*initiator_time_rec*/,
	OM_uint32 * acceptor_time_rec );

int
_gss_spnego_add_mech_type (
	gss_OID /*mech_type*/,
	int /*includeMSCompatOID*/,
	MechTypeList */*mechtypelist*/);

OM_uint32
_gss_spnego_alloc_cred (
	OM_uint32 */*minor_status*/,
	gss_cred_id_t /*mech_cred_handle*/,
	gss_cred_id_t */*cred_handle*/);

OM_uint32
_gss_spnego_alloc_sec_context (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t */*context_handle*/);

OM_uint32
_gss_spnego_canonicalize_name (
	 OM_uint32 * /*minor_status*/,
	const gss_name_t /*input_name*/,
	const gss_OID /*mech_type*/,
	gss_name_t * output_name );

OM_uint32
_gss_spnego_compare_name (
	OM_uint32 */*minor_status*/,
	const gss_name_t /*name1*/,
	const gss_name_t /*name2*/,
	int * name_equal );

OM_uint32
_gss_spnego_context_time (
	OM_uint32 */*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	OM_uint32 *time_rec );

OM_uint32
_gss_spnego_delete_sec_context (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t */*context_handle*/,
	gss_buffer_t output_token );

OM_uint32
_gss_spnego_display_name (
	OM_uint32 * /*minor_status*/,
	const gss_name_t /*input_name*/,
	gss_buffer_t /*output_name_buffer*/,
	gss_OID * output_name_type );

OM_uint32
_gss_spnego_display_status (
	OM_uint32 * /*minor_status*/,
	OM_uint32 /*status_value*/,
	int /*status_type*/,
	const gss_OID /*mech_type*/,
	OM_uint32 * /*message_context*/,
	gss_buffer_t status_string );

OM_uint32
_gss_spnego_duplicate_name (
	 OM_uint32 * /*minor_status*/,
	const gss_name_t /*src_name*/,
	gss_name_t * dest_name );

OM_uint32
_gss_spnego_encode_response (
	OM_uint32 */*minor_status*/,
	const NegTokenResp */*resp*/,
	gss_buffer_t /*data*/,
	u_char **/*ret_buf*/);

OM_uint32
_gss_spnego_export_name (
	OM_uint32 * /*minor_status*/,
	const gss_name_t /*input_name*/,
	gss_buffer_t exported_name );

OM_uint32
_gss_spnego_export_sec_context (
	 OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	gss_buffer_t interprocess_token );

OM_uint32
_gss_spnego_get_mic (
	OM_uint32 */*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	gss_qop_t /*qop_req*/,
	const gss_buffer_t /*message_buffer*/,
	gss_buffer_t message_token );

OM_uint32
_gss_spnego_import_name (
	OM_uint32 * /*minor_status*/,
	const gss_buffer_t /*input_name_buffer*/,
	const gss_OID /*input_name_type*/,
	gss_name_t * output_name );

OM_uint32
_gss_spnego_import_sec_context (
	 OM_uint32 * /*minor_status*/,
	const gss_buffer_t /*interprocess_token*/,
	gss_ctx_id_t *context_handle );

OM_uint32
_gss_spnego_indicate_mechtypelist (
	OM_uint32 */*minor_status*/,
	int /*includeMSCompatOID*/,
	const gssspnego_cred /*cred_handle*/,
	MechTypeList */*mechtypelist*/,
	gss_OID */*preferred_mech*/);

OM_uint32
_gss_spnego_init_sec_context (
	OM_uint32 * /*minor_status*/,
	const gss_cred_id_t /*initiator_cred_handle*/,
	gss_ctx_id_t * /*context_handle*/,
	const gss_name_t /*target_name*/,
	const gss_OID /*mech_type*/,
	OM_uint32 /*req_flags*/,
	OM_uint32 /*time_req*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	const gss_buffer_t /*input_token*/,
	gss_OID * /*actual_mech_type*/,
	gss_buffer_t /*output_token*/,
	OM_uint32 * /*ret_flags*/,
	OM_uint32 * time_rec );

OM_uint32
_gss_spnego_inquire_context (
	 OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	gss_name_t * /*src_name*/,
	gss_name_t * /*targ_name*/,
	OM_uint32 * /*lifetime_rec*/,
	gss_OID * /*mech_type*/,
	OM_uint32 * /*ctx_flags*/,
	int * /*locally_initiated*/,
	int * open_context );

OM_uint32
_gss_spnego_inquire_cred (
	OM_uint32 * /*minor_status*/,
	const gss_cred_id_t /*cred_handle*/,
	gss_name_t * /*name*/,
	OM_uint32 * /*lifetime*/,
	gss_cred_usage_t * /*cred_usage*/,
	gss_OID_set * mechanisms );

OM_uint32
_gss_spnego_inquire_cred_by_mech (
	 OM_uint32 * /*minor_status*/,
	const gss_cred_id_t /*cred_handle*/,
	const gss_OID /*mech_type*/,
	gss_name_t * /*name*/,
	OM_uint32 * /*initiator_lifetime*/,
	OM_uint32 * /*acceptor_lifetime*/,
	gss_cred_usage_t * cred_usage );

OM_uint32
_gss_spnego_inquire_cred_by_oid (
	OM_uint32 * /*minor_status*/,
	const gss_cred_id_t /*cred_handle*/,
	const gss_OID /*desired_object*/,
	gss_buffer_set_t */*data_set*/);

OM_uint32
_gss_spnego_inquire_mechs_for_name (
	 OM_uint32 * /*minor_status*/,
	const gss_name_t /*input_name*/,
	gss_OID_set * mech_types );

OM_uint32
_gss_spnego_inquire_names_for_mech (
	 OM_uint32 * /*minor_status*/,
	const gss_OID /*mechanism*/,
	gss_OID_set * name_types );

OM_uint32
_gss_spnego_inquire_sec_context_by_oid (
	OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	const gss_OID /*desired_object*/,
	gss_buffer_set_t */*data_set*/);

OM_uint32
_gss_spnego_internal_delete_sec_context (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t */*context_handle*/,
	gss_buffer_t output_token );

OM_uint32
_gss_spnego_process_context_token (
	OM_uint32 */*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	const gss_buffer_t token_buffer );

OM_uint32
_gss_spnego_release_cred (
	OM_uint32 */*minor_status*/,
	gss_cred_id_t */*cred_handle*/);

OM_uint32
_gss_spnego_release_name (
	OM_uint32 * /*minor_status*/,
	gss_name_t * input_name );

OM_uint32
_gss_spnego_require_mechlist_mic (
	OM_uint32 */*minor_status*/,
	gssspnego_ctx /*ctx*/,
	int */*require_mic*/);

OM_uint32
_gss_spnego_seal (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	int /*qop_req*/,
	gss_buffer_t /*input_message_buffer*/,
	int * /*conf_state*/,
	gss_buffer_t output_message_buffer );

OM_uint32
_gss_spnego_select_mech (
	OM_uint32 */*minor_status*/,
	MechType */*mechType*/,
	gss_OID */*mech_p*/);

OM_uint32
_gss_spnego_set_sec_context_option (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	const gss_OID /*desired_object*/,
	const gss_buffer_t /*value*/);

OM_uint32
_gss_spnego_sign (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int /*qop_req*/,
	gss_buffer_t /*message_buffer*/,
	gss_buffer_t message_token );

OM_uint32
_gss_spnego_unseal (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	gss_buffer_t /*input_message_buffer*/,
	gss_buffer_t /*output_message_buffer*/,
	int * /*conf_state*/,
	int * qop_state );

OM_uint32
_gss_spnego_unwrap (
	OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	const gss_buffer_t /*input_message_buffer*/,
	gss_buffer_t /*output_message_buffer*/,
	int * /*conf_state*/,
	gss_qop_t * qop_state );

OM_uint32
_gss_spnego_verify (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	gss_buffer_t /*message_buffer*/,
	gss_buffer_t /*token_buffer*/,
	int * qop_state );

OM_uint32
_gss_spnego_verify_mic (
	OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	const gss_buffer_t /*message_buffer*/,
	const gss_buffer_t /*token_buffer*/,
	gss_qop_t * qop_state );

OM_uint32
_gss_spnego_wrap (
	OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	const gss_buffer_t /*input_message_buffer*/,
	int * /*conf_state*/,
	gss_buffer_t output_message_buffer );

OM_uint32
_gss_spnego_wrap_size_limit (
	 OM_uint32 * /*minor_status*/,
	const gss_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	OM_uint32 /*req_output_size*/,
	OM_uint32 * max_input_size );

#endif /* __spnego_private_h__ */
