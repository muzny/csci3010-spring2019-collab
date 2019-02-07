#include "ManyFunctions.h"
#include <iostream>

int main() {
    // make sure to run your functions!
    std::vector<int> bit = {1,2,3,4,5,6};
    std::vector<bool> b = EvenMask(bit);
    for (int i = 0; i < b.size(); ++i)
    {
    	std::cout<<b[i]<<std::endl;
    }
}
