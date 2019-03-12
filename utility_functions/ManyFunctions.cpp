#include "ManyFunctions.h"
int Sum(int num1, int num2){
	return num1 + num2;
}

std::vector<int> VectorPlusN(std::vector<int>v, int n){
	for(int i = 0; i < v.size(); i++){
		v[i] = v[i] + n;
	}

	return v;
}
