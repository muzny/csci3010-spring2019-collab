#include "ManyFunctions.h"
#include <iostream>
#include <vector>
#include <cmath>

int SquareUntil(std::vector<int> Square,int n)
{
	if(n == 0)
	{
		std::cout << "N is not greater than zero." << std::endl;
	}

	else
	{
		for(int i = 0; i < n; i++)
		{
			int power = pow(i+1, i+1);
			Square.push_back(power);
			std::cout << Square[i] << std::endl;
		}
	}
}
