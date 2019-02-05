#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>

/**
    Removes first occurrence of string from another string
    @param s1 First string to find in s2
    @param s2 Second string to delete s1 in if found
    @return The new string that is result of removing the first occurrence of s1 from s2
*/
std::string RemoveFirstSubstring(std::string s1, std::string s2){
	
	std::size_t position = s2.find(s1);		
	s2.replace(position, s1.length(), "");
	return s2;	
}


