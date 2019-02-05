#include "ManyFunctions.h"
#include <vector>

std::vector<int> VectorTimesN(std::vector<int> v, int n){
	for (int i = 0; i < v.size(); i++){
		v[i] *= n;
	}
	return v;
}
