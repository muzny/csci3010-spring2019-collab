
#include "ManyFunctions.h"
#include <iostream>
#include <vector>

int main() 
{
	std::vector<int> Square;


	std::cout << "Tests 1: " << std::endl;
	SquareUntil(Square, 1);
	
	std::cout << "Tests 2: " << std::endl;
	SquareUntil(Square, 2);
	
	std::cout << "Tests 3: " << std::endl;
	SquareUntil(Square, 3);

	std::cout << "Tests 4: " << std::endl;
	SquareUntil(Square, 4);

	std::cout << std::endl;
	std::cout << "When n is 0." << std::endl;
	SquareUntil(Square, 0);


}
