#include "ManyFunctions.h"
#include <iostream>

/**
 * @brief Test the ReturnTwos function to verify matches given cases in header
 * 
 */
void TestReturnTwos();

int main() {
    // make sure to run your functions!
    TestReturnTwos();
}

void TestReturnTwos()
{
    int sixteen = 16;
    int seven = 7;
    int twenty_six = 26;
    int fifty_two = 52;

    std::cout << sixteen << " -> " << RemoveTwos(sixteen) << std::endl;
    std::cout << seven << " -> " << RemoveTwos(seven) << std::endl;
    std::cout << twenty_six << " -> " << RemoveTwos(twenty_six) << std::endl;
    std::cout << fifty_two << " -> " << RemoveTwos(fifty_two) << std::endl;
}
