#include "ManyFunctions.h"
#include <vector>
#include <iostream>
int main() {
    // make sure to run your functions!
    
    // Begin section for Matt and Paul's testing MatchVectors function
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    for (int x = 0; x < 10; x++)
    {
        a.push_back(x);
    }
    for (int y = 0; y < 5; y++)
    {
        b.push_back(y*2);
    }

    c = MatchVectors(a, b);

    // Prints the result of testing MatchVectors.
    // This should print only the odd numbers between 0 and 10,
    // since all of the even numbers should have been removed
    // by calling MatchVectors.
    for (unsigned int z = 0; z < c.size(); z++)
    {
        std::cout << c[z] << " ";
    }
    std::cout << std::endl;
    // End section of testing Matt and Paul's MatchVectors
    
    std::vector<int> test_vector{2, 4, 5, 7, 9, 10, 11, 12};

    std::vector<int> test_vector2 = MultiplesFilter(test_vector, 2);

    for(int i = 0; i < test_vector2.size(); i++)
    {
    	std::cout << test_vector2[i] << std::endl;
    }
}
