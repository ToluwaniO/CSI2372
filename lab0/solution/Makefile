#!/bin/csh

#
# $Id: Makefile,v 1.1 2016/09/09 21:39:07 jlang Exp $
#
# $Log: Makefile,v $
# Revision 1.1  2016/09/09 21:39:07  jlang
# Created new intro lab 0
#
# Revision 1.1  2015/09/23 15:00:32  jlang
# Solution in multiple files
#
#

CXX = g++

.PHONY: all clean

CXXFLAGS = -std=c++11

SRC = main.cpp show.cpp read_input.cpp


# Default build : 
all: dependencies JtC

dependencies: $(SRC:%.cpp=%.d) 

# sed line based on John Graham-Cumming, Dependency Management,
# Dr.Dobb's Portal, Apr 01, 2006.
%.d:%.cpp
	$(CXX) $(INCDIR) -MG -MM $< | sed 's,\($*\.o\)[ :]*\(.*\), $@ : $$\(wildcard \2\)\n\1 : \2,g' > $@
-include $(SRC:.cpp=.d)


JtC: $(SRC:%.cpp=%.o) 
	$(CXX) $(LDLIBDIR) -o $@ $^ $(LDLIBS)

%.o:%.cpp
	$(CXX) $(INCDIR) $(CXXFLAGS) -c $*.cpp -o $@ 

clean:
	rm -f *~ *.o *.d
