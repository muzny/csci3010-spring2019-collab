#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>


int main() {
    // make sure to run your functions!
    std::string old_string = "How are you?";
    std::string find_string = "are";
    std::cout<<"String before removal: "<<old_string<<std::endl;
    std::string new_string = RemoveFirstSubstring(find_string, old_string);
    std::cout<<"String after removal: "<<new_string<<std::endl;

}
