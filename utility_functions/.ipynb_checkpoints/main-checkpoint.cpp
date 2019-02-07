#include "ManyFunctions.h"

int main() {
    // make sure to run your functions!
	
	int SquaresUntil_Test1 = 1;
	int SquaresUntil_Test2 = 2;
	int SquaresUntil_Test3 = 5;
	
	std::vector<int> SquaresUntil_Test1_Vector = SquaresUntil(SquaresUntil_Test1);
	std::vector<int> SquaresUntil_Test2_Vector = SquaresUntil(SquaresUntil_Test2);
	std::vector<int> SquaresUntil_Test3_Vector = SquaresUntil(SquaresUntil_Test3);
	
	std::vector<int> SquareUntil_TestArray[3] = { SquaresUntil_Test1_Vector , SquaresUntil_Test2_Vector , SquaresUntil_Test3_Vector };
	
	for(int i = 0; i < 3; i++){
		for(std::vector<int> temp : SquareUntil_TestArray[i]){
			std::cout << temp << std::endl;
		}
		std::cout << "End of Test" << std::endl;
	}
}
