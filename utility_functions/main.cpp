#include "ManyFunctions.h"
#include <vector>
#include <iostream>

int main() {
    // make sure to run your functions!
   
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(23);
    numbers.push_back(7);


    std::cout << "The sum is " << Sum(numbers) << std::endl;

    return 0;
}
