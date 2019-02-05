#include "ManyFunctions.h"

#include <vector>
#include <iostream>
int main() {
    // make sure to run your functions!
    
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

    for (unsigned int z = 0; z < c.size(); z++)
    {
        std::cout << c[z] << " " << std::endl;
    }
}
