# nems-wmic
## WMIC for NEMS Linux

In NEMS Linux 1.5+, nems-wmic was based on openvas-smb, which was based on Zenoss WMI 1.3.14, which is based on samba.

By NEMS Linux 1.6, OpenVAS' version has fallen behind the changes in WMI on Windows 10 2004+, so I've moved back to Zenoss' source with their WMI 1.4.1, which fixes these issues ahead of OpenVAS.

:P  Ah, gotta love open source!

## Installation

See [052-wmic](https://github.com/Cat5TV/nems-admin/blob/master/build/052-wmic) in nems-admin.

## License

Licensed under the [GNU General Public License v2.0 or later](COPYING).
