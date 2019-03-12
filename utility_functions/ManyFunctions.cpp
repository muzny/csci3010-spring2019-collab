#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>


// By: Tyler Benson, Mohamed Abdalla
/*
	This function takes a string that needs to be split
	and another string for the delimiter to split upon
	The function steps through sent string looking for the
	dilemeter string. When the dilemeter is found, the substring
	is copied, then erased from the sent string, then the copy
	is added to a vector of strings. The function returns the vector
	of resulting strings from the split.
*/
std::vector<std::string> Split(std::string whole, std::string seperator)
{
	std::vector<std::string> words;
	size_t pos = 0;
	std::string token;
	whole = whole + seperator;
	while ((pos = whole.find(seperator)) != std::string::npos)
	{
		token = whole.substr(0, pos);
		whole.erase(0, pos + seperator.length() + 1);
		words.push_back(token);
	}
	// words.push_back(whole);
	return words;
}

// std::vector<std::string> Split(std::string whole, char seperator)
// {
// 	std::string temp_word;
// 	std::vector<std::string> words;
// 	int i;
// 	whole = whole + seperator;
// 	while (whole.length() != 0) {
// 		std::cout << "FLAG" << std::endl;
// 		i = 0;
// 		if (whole[i] == seperator) {
// 			temp_word = whole.substr(0, i);
// 			whole.erase(0,i+1);
// 			words.push_back(temp_word);
// 		}
// 	}
// 	return words;
// }
