#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>

/**
  Returns the sum of the two integers
  @param integer num1, integer num2
  @return sum of num1 + num2
*/
int Sum(int num1, int num2){
	return num1 + num2;
}

/**
  Adds n to all the elements in v.
  @param vector v, integer to add n
  @return vector v
*/
std::vector<int> VectorPlusN(std::vector<int>v, int n){
	for(int i = 0; i < v.size(); i++){
		v[i] = v[i] + n;
	}

	return v;
}

/*
    Returns -1 if num is negative, 1 if it is positive.
    @param num The number
    @return -1 if negative, 1 if positive
*/
int Sign(int num){
    if(num<0){
        return -1;
    }else if(num > 0){
        return 1;
    }else{
        return 0;
    }
}

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

int Sum(std::vector<int> nums){
	int sum = 0;
	for(int i = 0; i < nums.size(); i++){
		sum += nums[i];
	}
	return sum;
}

int NthFibonacci(int n){
	if (n <= 1){
		return n;
	} 
    return NthFibonacci(n-1) + NthFibonacci(n-2); 
	
}

// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums)
{
	// Initialize the product to 1.
	int prod = 1;
	// Iterate over entire vector.
	for(unsigned i = 0; i < nums.size(); i++)
	{
		// Multiply current product by next value in vector.
		prod = prod * nums[i];
	}
	// Return the final product.
	return(prod);
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

std::vector<int> MultiplesFilter(std::vector<int> v, int divides_by)
{
	for(int i = 0; i < v.size(); i++)
	{
		if((v[i] % divides_by == 0) && (v[i] != 0))
		{
			v.erase(v.begin() + i);
			i--;
		}
	}
	return v;
}


}
