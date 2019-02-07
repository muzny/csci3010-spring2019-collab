#include "ManyFunctions.h"
#include <iostream>

int main() {
    // make sure to run your functions!

    std::cout << RemoveAllSubstrings("Banana", "nana") << std::endl;
    std::cout<<RemoveAllSubstrings("This is a this is a string", "is")<<std::endl;
    std::cout<<RemoveAllSubstrings("", "")<<std::endl;
    std::cout<<RemoveAllSubstrings("blah", "very blah")<<std::endl;

    std::cout<<"Program terminated successfully"<<std::endl;
}
