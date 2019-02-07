CXX = g++
CXXFLAG	= -std=c++11 -Wall
CXXGDB = -ggdb

all: test

clean:
	rm main ManyFunctions.o

main: ManyFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp ManyFunctions.o -o main

ManyFunctions.o: ManyFunctions.cpp
	$(CXX) $(CXXFLAGS) -c ManyFunctions.cpp
