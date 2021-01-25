PROJECT=unchess
TYPE=c

CC=gcc
RM=rm -f
CFLAGS=-g -Wall -Wextra -Wshadow -pedantic -O3 -Wunreachable-code -Wmain #flags for C and C++
LDFLAGS=-g -s
LDLIBS= # insert here all libraries needed


SRCS=src/main.c src/game/u_main.c
OBJS=$(subst .$(TYPE),.o,$(SRCS))

all : $(PROJECT)

$(PROJECT): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(PROJECT) $(OBJS) $(LDLIBS)
	
depend: .d

.d: $(SRCS)
	$(RM) ./.d
	$(CXX) $(CFLAGS) -MM $^>>./.d;

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) *~ .d

include .d
