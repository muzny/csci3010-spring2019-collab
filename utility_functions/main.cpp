#include "ManyFunctions.h"
#include <vector>
#include <iostream>

int main() {
	std::vector<int> testVectorTimesN = {1,2,3};
	testVectorTimesN = VectorTimesN(testVectorTimesN,4);
	for (int i = 0; i < testVectorTimesN.size(); i++){
		std::cout << testVectorTimesN[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}
