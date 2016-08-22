all: main

.PHONY main: main.o
	g++ main.o -o main

main.o: main.cpp header_file.h
	clear
	g++ -c main.cpp

test: main
	clear; ./main

clean:
	rm -rf *.o main *~ *\#
