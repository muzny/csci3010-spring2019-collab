
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

// Function takes a string to split and a string delimiter
// to define where the splits should occur. The function splits
// the sent string at the delimiter. The function returns
// a vector of the strings resulting from the split.
std::vector<std::string> Split(std::string whole, std::string seperator);
#endif // _MANYFUNCTIONS_H_
