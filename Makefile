# Makefile for CS 24 Lab05

testlist: testlist.o intlist.o
	g++ -o testlist testlist.o intlist.o

testlist.o: testlist.cpp intlist.h
	g++ -g -c testlist.cpp

intlist.o: intlist.cpp intlist.h
	g++ -g -c intlist.cpp

clean:
	rm -f testlist testlist.o intlist.o
