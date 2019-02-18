#include "ManyFunctions.h"

std::vector<bool> EvenMask(std::vector<int> bit){
	std::vector<bool> result;
	for (int i = 0; i < bit.size(); ++i)
	{
		if (bit[i]%2 == 0)
		{
			result.push_back(true);
		} else {
			result.push_back(false);
		}
	}
	return result;
}
