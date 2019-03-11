#include "ManyFunctions.h"
#include <vector>

std::vector<int> SquareUntil(int n)
{
	std::vector<int> Squares;
	if (n >= 0)
	{
		for (int i=1; i <=n; i++)
		{
			int answer = pow(n,n);
			Sqaures.push_back(answer);

		}
		
		for (int x : Sqaures)
		{
			std::cout << x << " ";
		}
	}

	else
	{
		std::cout << "n is not greater than 0." << std::endl;
		return 0;
 	}
    return 0;
}
