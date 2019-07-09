# nems-wmic
## WMIC Version 4.0.0 for NEMS Linux
### Based on openvas-smb, which is based on wmi-1.3.14, which is based on samba  :P  Ah, gotta love open source!

WMIC used to be available via http://www.openvas.org/download/wmi/wmi-1.3.14.tar.bz2 however that has been discontinued. Development proceeded courtesy of [Greenbone Networks GmbH](https://www.greenbone.net/) (OpenVAS) and this has been integrated into NEMS Linux 1.5 in place of the old WMI 1.3.14.

## Installation

See [053-wmic](https://github.com/Cat5TV/nems-admin/blob/master/build/053-wmic) in nems-admin.

## License

Licensed under the [GNU General Public License v2.0 or later](COPYING).

## History

This module is derived from a package distributed by Zenoss, Inc.,
named wmi-1.3.14. The original location was:
http://dev.zenoss.org/svn/trunk/inst/externallibs/wmi-1.3.14.tar.bz2

Since then, various special patches were applied for some needs of OpenVAS
Scanner. Also, anything not needed for OpenVAS Scanner was removed.

The Zenoss package actually was a copy of a code base of the Samba project
(https://www.samba.org/), forked based on the GPL v2 licensed status.
