CXX = g++
CXXFLAGS= -std=c++11 -Wall
CXXGDB = -ggdb

all: main test

clean:
	rm main test ManyFunctions.o

main: ManyFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp ManyFunctions.o -o main

ManyFunctions.o: ManyFunctions.cpp
	$(CXX) $(CXXFLAGS) -c ManyFunctions.cpp
