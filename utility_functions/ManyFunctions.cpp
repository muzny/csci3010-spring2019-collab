#include "ManyFunctions.h"
#include <vector>
int Sum(int num1, int num2){
	return num1+num2;
}

std::vector<int> VectorPlusN(std::vector<int>v, int n){
	for(int i=0; i<v.size(); i++){
		v[i]=v[i]+n;
	}

	return v;
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

