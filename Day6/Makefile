SRCS	= main.c pi.c
OBJS	= $(SRCS:.c=.o)
TARGET	= pi_calc.$(CC)

CC	= gcc
INCS	= 
DBG	= -g
OPT	= -Ofast -ftree-parallelize-loops=4
PARA	= 
CFLAGS	= $(DBG) $(OPT) $(PARA) $(XOPTS)

LIBS	= 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

clean:
	@/bin/rm -f $(OBJS) *~ core*

realclean: clean
	@/bin/rm -f $(TARGET)

main.o: pi.h
