CXX = g++
CXXFLAG	= -std=c++11 -Wall
CXXGDB = -ggdb

all: main test

clean:
	rm main test ManyFunctions.o
    
main: ManyFunctions.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp ManyFunctions.o -o main
    
test: ManyFunctions.o test.cpp catch.hpp
	$(CXX) $(CXXFLAGS) test.cpp ManyFunctions.o -o test



ManyFunctions.o: ManyFunctions.cpp
	$(CXX) $(CXXFLAGS) -c ManyFunctions.cpp