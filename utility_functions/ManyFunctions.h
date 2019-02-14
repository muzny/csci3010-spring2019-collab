
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



std::vector<int> VectorTimesN(std::vector<int> v, int n);
/**
	Removes substring s2 from s1.
	@param s1 The string being removed from
	@param s2 The string we are removing
	@return s1 after removal
*/
std::string RemoveAllSubstrings(std::string s1, std::string s2);

// divides an input integer by 2 until it is impossible to do so, then returns the final number
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 ->)
int RemoveTwos(int original);

std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b);

#endif // _MANYFUNCTIONS_H_
