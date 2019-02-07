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
    //creadte a vector
    std::vector<int> bit_1 = {8888,76757,4567,88890,67532};
    std::vector<bool> b_1 = EvenMask(bit);
    for (int i = 0; i < b_1.size(); ++i)
    {
    	std::cout<<b_1[i]<<std::endl;
    }
}
