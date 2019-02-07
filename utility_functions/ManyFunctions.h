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
    Return string with removed first instance of s1 from s2
    @param s1 first string to find in s2
    @param s2 second string to remove s1 from if present
    @return string
*/
std::string RemoveFirstSubstring(std::string s1, std::string s2);


#endif // _MANYFUNCTIONS_H_
