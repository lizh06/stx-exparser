# $Id$

if HAVE_SWIG

EXTRA_DIST = stx-exparser.i README exprcalc.pl
BUILT_SOURCES = stx-exparser_wrap.cpp

stx-exparser_wrap.cpp: stx-exparser.i
	$(SWIG) -Wall -Wallkw -perl5 -I$(top_srcdir)/libstx-exparser -o $@ $<

CLEANFILES = stx-exparser_wrap.cpp ExpressionParser.pm STX/ExpressionParser.pm ExpressionParser.so

noinst_LTLIBRARIES = ExpressionParser.la

nodist_ExpressionParser_la_SOURCES = stx-exparser_wrap.cpp

ExpressionParser_la_LIBADD = ../libstx-exparser/libstx-exparser.la

ExpressionParser_la_LDFLAGS = -module -rpath /usr/lib

ExpressionParser_la_CXXFLAGS = -I$(top_srcdir)/libstx-exparser `perl -MExtUtils::Embed -e ccopts`

all-local:
	rm -rvf STX/
	mkdir STX/
	cp -L ExpressionParser.pm STX/
	ln -sf .libs/ExpressionParser.so

clean-local:
	rmdir STX || true

endif