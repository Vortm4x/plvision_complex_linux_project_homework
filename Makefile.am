SUBDIRS = calculator formatter

ACLOCAL_AMFLAGS = -I m4

.PHONY: clean-all

link:
	@sudo echo @libdir@ | sudo tee /etc/ld.so.conf.d/complex-linux-project.conf
	@sudo ldconfig

unlink:
	@sudo rm -f /etc/ld.so.conf.d/complex-linux-project.conf
	@sudo ldconfig

clean-all: uninstall distclean unlink
	@rm -irf 								\
		@abs_top_srcdir@/aclocal.m4 		\
		@abs_top_srcdir@/autom4te.cache		\
		@abs_top_srcdir@/configure   		\
		@abs_top_srcdir@/compile			\
		@abs_top_srcdir@/depcomp			\
		@abs_top_srcdir@/missing			\
		@abs_top_srcdir@/ar-lib				\
		@abs_top_srcdir@/m4					\
		@abs_top_srcdir@/install-sh			\
		@abs_top_srcdir@/ltmain.sh			\
		@abs_top_srcdir@/config.guess		\
		@abs_top_srcdir@/config.sub
	@find @abs_top_srcdir@ 		-name Makefile.in 	-delete
	@find @abs_top_srcdir@ 		-name *.Plo 		-delete
	@find @abs_top_srcdir@ 		-name *.Po 			-delete
	@find @abs_top_builddir@ 	-name .deps 		-delete
