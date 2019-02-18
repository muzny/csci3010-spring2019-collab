#include "ManyFunctions.h"
#include <iostream>

int main() {
    std::cout<<"EvenMask:"<<std::endl;
    std::vector<int> int_vector = {1,2,3,4,5,6};
    std::vector<bool> boolean_vector = EvenMask(int_vector);
    std::cout<<"convert ";
    for (int i = 0; i < int_vector.size(); ++i)
    {
        std::cout<<int_vector[i]<<" ";
    }
    std::cout<<" into: ";
    for (int i = 0; i < boolean_vector.size(); ++i)
    {
    	std::cout<<boolean_vector[i]<<" ";
    }
    std::cout<<std::endl;
    
    std::vector<int> int_vector2 = {8888,76757,4567,88890,67532};
    std::vector<bool> boolean_vector2 = EvenMask(int_vector2);
    std::cout<<"convert ";
    for (int i = 0; i < int_vector2.size(); ++i)
    {
        std::cout<<int_vector2[i]<<" ";
    }
    std::cout<<" into: ";
    for (int i = 0; i < boolean_vector2.size(); ++i)
    {
        std::cout<<boolean_vector2[i]<<" ";
    }
    std::cout<<std::endl;
}
