SUBDIRS = bonds

AM_CPPFLAGS = -I${top_srcdir} -I${top_builddir}

this_includedir=${includedir}/${subdir}
this_include_HEADERS = \
    shiborswap.hpp \
    subperiodsswap.hpp

libInstruments_la_SOURCES = \
    shiborswap.cpp \
    subperiodsswap.cpp

libInstruments_la_LIBADD = \
    bonds/libBonds.la

noinst_LTLIBRARIES = libInstruments.la
