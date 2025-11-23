SUBDIRS = convert

bin_PROGRAMS = formatter

formatter_SOURCES = main.c
formatter_LDADD = -lconvert

formatter_LDFLAGS = -L@builddir@/convert
AM_CPPFLAGS = -I@srcdir@/convert/include
