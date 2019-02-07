#include "ManyFunctions.h"
#include <vector>
#include <iostream>

int main() {
    // make sure to run your functions!
    // Beginning of tests for Adam, Ash and Thomas' Product function
	// Initial test case for product.
	std::vector<int> test1;
	test1.push_back(3);
	test1.push_back(7);
	test1.push_back(5);
	// Test case for negative numbers
	std::vector<int> test2;
	test2.push_back(-1);
	test2.push_back(5);
	// Test case for 0.
	std::vector<int> test3;
	test3.push_back(4);
	test3.push_back(0);

	// Should return 105
	std::cout << Product(test1) << std::endl;
	// Should return -5
	std::cout << Product(test2) << std::endl;
	// Should return 0
	std::cout << Product(test3) << std::endl;
	// End of tests for Adam, Ash and Thomas' Product Function
}
