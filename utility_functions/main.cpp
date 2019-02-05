#include "ManyFunctions.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
    // make sure to run your functions!
   
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(23);
    numbers.push_back(7);


    cout << "The sum is " << Sum(numbers) << endl;
}
