CXX = g++
CXXFLAGS = -std=c++11 -Wall
CXXGDB = -ggdb

all: main test

clean:
	rm main test ManyFunctions.o

test: ManyFunctions.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp ManyFunctions.o -o test

main: ManyFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp ManyFunctions.o -o main

ManyFunctions.o: ManyFunctions.cpp
	$(CXX) $(CXXFLAGS) -c ManyFunctions.cpp
