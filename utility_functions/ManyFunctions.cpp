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


int NthFibonacci(int n){
	if (n <= 1){
		return n;
	} 
    return NthFibonacci(n-1) + NthFibonacci(n-2); 
	
}


std::vector<int> VectorTimesN(std::vector<int> v, int n){
	for (int i = 0; i < v.size(); i++){
		v[i] *= n;
	}
	return v;
}

std::string RemoveAllSubstrings(std::string s1, std::string s2) {

	size_t pos = std::string::npos;

	if(s1.length() < s2.length()) return s1;
	if(s1 == s2) return "";
	while((pos = s1.find(s2)) != std::string::npos) {
		s1.erase(pos, s2.length());
	}

	return s1;
}

int RemoveTwos(int original)
{
    return (original % 2 == 1) ? original : RemoveTwos(original / 2);
}

/**
	Takes in two vectors and removes all occurrences of elements in the second
	vector from the first vector.

	@param a The vector to remove elements from.
	@param b The vector to filter elements in a based upon.

	@return The vector a, but with all of the elements that were in common
	between a and b removed.
*/
std::vector<int> MatchVectors(std::vector<int> a, std::vector<int> b)
{
	for (std::vector<int>::iterator b_iter = b.begin(); b_iter != b.end(); b_iter++)
	{
		for (std::vector<int>::iterator a_iter = a.begin(); a_iter != a.end(); a_iter++)
		{
			if (*a_iter == *b_iter)
			{
				a_iter = a.erase(a_iter);
			}
		}
	}
	return a;
}
