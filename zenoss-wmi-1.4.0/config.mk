# config.mk - Autogenerated by configure, DO NOT EDIT!

###################################
# Start Ext Lib LIBREPLACE_EXT
[EXT_LIB::LIBREPLACE_EXT]
LIBS = -ldl 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib LIBREPLACE_EXT
###################################

###################################
# Start Ext Lib RESOLV
[EXT_LIB::RESOLV]
LIBS = -lresolv 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib RESOLV
###################################

###################################
# Start Ext Lib NSL
[EXT_LIB::NSL]
LIBS = 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib NSL
###################################

###################################
# Start Ext Lib GAI
[EXT_LIB::GAI]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib GAI
###################################

###################################
# Start Ext Lib XATTR
[EXT_LIB::XATTR]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib XATTR
###################################

###################################
# Start Ext Lib ICONV
[EXT_LIB::ICONV]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib ICONV
###################################

###################################
# Start Ext Lib EXT_SOCKET
[EXT_LIB::EXT_SOCKET]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib EXT_SOCKET
###################################

###################################
# Start Ext Lib EXT_NSL
[EXT_LIB::EXT_NSL]
LIBS = 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib EXT_NSL
###################################

###################################
# Start Ext Lib SQLITE3
[EXT_LIB::SQLITE3]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib SQLITE3
###################################

###################################
# Start Ext Lib GNUTLS
[EXT_LIB::GNUTLS]
LIBS =
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib GNUTLS
###################################

###################################
# Start Ext Lib GNUTLS
[EXT_LIB::GNUTLS]
LIBS = 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib GNUTLS
###################################

###################################
# Start Ext Lib PTHREAD
[EXT_LIB::PTHREAD]
LIBS = -lpthread
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib PTHREAD
###################################

###################################
# Start Ext Lib SETPROCTITLE
[EXT_LIB::SETPROCTITLE]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib SETPROCTITLE
###################################

###################################
# Start Ext Lib gconf
[EXT_LIB::gconf]
LIBS =
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib gconf
###################################

###################################
# Start Ext Lib BLKID
[EXT_LIB::BLKID]
LIBS = 
CFLAGS = 
CPPFLAGS = 
LDFLAGS = 
# End Ext Lib BLKID
###################################

###################################
# Start Ext Lib PAM
[EXT_LIB::PAM]
LIBS = 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib PAM
###################################

###################################
# Start Ext Lib CRYPT
[EXT_LIB::CRYPT]
LIBS = -lcrypt 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib CRYPT
###################################

###################################
# Start Ext Lib SASL
[EXT_LIB::SASL]
LIBS = 
CFLAGS =
CPPFLAGS =
LDFLAGS =
# End Ext Lib SASL
###################################


###################################
# Start Subsystem LIBREPLACE
[SUBSYSTEM::LIBREPLACE]
OBJ_FILES =  Samba/source/lib/replace/replace.o Samba/source/lib/replace/snprintf.o
PRIVATE_DEPENDENCIES = LIBREPLACE_EXT
CFLAGS = -Ilib/replace
ENABLE = YES
# End Subsystem LIBREPLACE
###################################

###################################
# Start Subsystem LIBREPLACE_HOSTCC
[SUBSYSTEM::LIBREPLACE_HOSTCC]
OBJ_FILES = Samba/source/lib/replace/replace.ho Samba/source/lib/replace/snprintf.ho
PRIVATE_DEPENDENCIES =
CFLAGS = -Ilib/replace
ENABLE = YES
# End Subsystem LIBREPLACE_HOSTCC
###################################

###################################
# Start Subsystem SMBREADLINE
[SUBSYSTEM::SMBREADLINE]
OBJ_FILES = lib/smbreadline/smbreadline.o
PRIVATE_DEPENDENCIES =
CFLAGS =
ENABLE = YES
# End Subsystem SMBREADLINE
###################################

###################################
# Start Subsystem LIBPOPT
[SUBSYSTEM::LIBPOPT]
OBJ_FILES = lib/popt/findme.o lib/popt/popt.o lib/popt/poptconfig.o lib/popt/popthelp.o lib/popt/poptparse.o
PRIVATE_DEPENDENCIES =
CFLAGS = -Ilib/popt
ENABLE = YES
# End Subsystem LIBPOPT
###################################


