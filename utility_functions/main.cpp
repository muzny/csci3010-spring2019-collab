#include "ManyFunctions.h"
#include <vector>
#include <iostream>

int main() {
    // make sure to run your functions!
	std::vector<int> nums;
	nums.push_back(3);
	nums.push_back(7);
	nums.push_back(5);

	std::cout << Product(nums) << std::endl;
}
