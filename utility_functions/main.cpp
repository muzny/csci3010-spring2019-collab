#include "ManyFunctions.h"
#include <iostream>

int main() {
    // make sure to run your functions!
    // Sum()
    int x = 7;
    int y = 10;
    std::cout << x << " + " << y << " = " << Sum(x, y) << std::endl;

    // VectorPlusN()
    std::vector<int> v{1, 2, 3, 4};

    std::cout << "v before call to VectorPlusN: ";
    for(int i : v) {
      std::cout << i << " ";
    }
    std::cout << "\n" << std::endl;

    std::vector<int> returned_vector = VectorPlusN(v, 5);

    std::cout << "v after call to VectorPlusN: ";
    for(int i : returned_vector) {
      std::cout << i << " ";
    }
    std::cout << "\n" << std::endl;

}
