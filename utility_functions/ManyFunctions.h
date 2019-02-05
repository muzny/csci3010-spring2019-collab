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
/**
    Removes first occurrence of string from another string
    @param s1 First string
    @param s2 Second string
    @return The new string that's result of removing the first occurrence of s2 from s1
*/
std::string RemoveFirstSubstring(std::string s1, std::string s2);


#endif // _MANYFUNCTIONS_H_
