#include "ManyFunctions.h"
#include <iostream>
#include <string>
#include <vector>


int main() {
    // make sure to run your functions!
  std::string jumble = "hello//and//world";
  std::vector<std::string> words = Split(jumble, "/");
	std::cout << "\nString to split: 'hello/and/world'" << std::endl;
	std::cout << "Delimiter: '//'" << std::endl;
	std::cout << "Result: " << std::endl;
	for(int i = 0; i < words.size(); i++){
		std::cout << words.at(i) << std::endl;
	}
  std::cout << std::endl;
	return 0;
}
