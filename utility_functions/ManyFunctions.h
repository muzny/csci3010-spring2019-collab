#ifndef _MANYFUNCTIONS_H_
#define _MANYFUNCTIONS_H_

#include <vector>
#include <string>

// CSCI 3010 - Fall 2018
// declare your function definitions here
// they should not be inside of a class
// include a function comment in this file, making sure to comment
// on what the function does, parameters, and return values
// for example (put this in the .cpp file for this exercise):
/*
    Adds two numbers together.
    @param num1 The first number
    @param num2 The second number
    @return the sum of the two numbers
*/
//int Sum(int num1, int num2);

/*
    Convert an int vector to a boolean vector. 
    Convert even integer to true and odd integer to false.
    
    @param bit An int vector
    @return a boolean vector
*/
std::vector<bool> EvenMask(std::vector<int> bit);

#endif // _MANYFUNCTIONS_H_
