#
# Makefile for csm linked list library
#

BUILD = ../build

CC = gcc
CFLAGS = -g -Wall

all:		csmkll.h libcsmkll.a

install:	all
		mkdir -p $(BUILD)/include
		cp csmkll.h $(BUILD)/include
		mkdir -p $(BUILD)/lib
		cp libcsmkll.a $(BUILD)/lib

libcsmkll.a:	csmkll.o
		ar -crs libcsmkll.a csmkll.o

csmkll.o:	csmkll.c csmkll.h
		$(CC) $(CFLAGS) -o csmkll.o -c csmkll.c

clean:
		rm -f *~ csmkll.o libcsmkll.a
