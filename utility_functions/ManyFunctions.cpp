#include "ManyFunctions.h"
#include <vector>
using namespace std;

int Sum(vector<int> nums){
	int sum = 0;
	for(int i = 0; i < nums.size(); i++){
		sum += nums[i];
	}
	return sum;
}

