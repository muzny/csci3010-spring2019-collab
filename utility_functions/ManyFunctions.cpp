#include "ManyFunctions.h"
#include <iostream>
#include <vector>


// Multiplies all numbers in a vector together and returns the resulting value
int Product(std::vector<int> nums)
{
	// Initialize the product to 1.
	int prod = 1;
	// Iterate over entire vector.
	for(int i = 0; i < nums.size(); i++)
	{
		// Multiply current product by next value in vector.
		prod = prod * nums[i];
	}
	// Return the final product.
	return(prod);
}