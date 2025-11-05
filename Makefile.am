SUBDIRS = calculator

.PHONY: clean-all

clean-all: uninstall distclean
	@rm -irf 								\
		@abs_top_srcdir@/aclocal.m4 		\
		@abs_top_srcdir@/autom4te.cache		\
		@abs_top_srcdir@/configure			\
		@abs_top_srcdir@/compile			\
		@abs_top_srcdir@/depcomp			\
		@abs_top_srcdir@/missing			\
		@abs_top_srcdir@/ar-lib				\
		@abs_top_srcdir@/install-sh
	@find @abs_top_srcdir@ 		-name Makefile.in 	-delete
	@find @abs_top_builddir@ 	-name .deps 		-delete
