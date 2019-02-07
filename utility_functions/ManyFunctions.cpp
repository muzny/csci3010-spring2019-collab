#include "ManyFunctions.h"
int NthFibonacci(int n){
	if (n <= 1){
		return n;
	} 
    return NthFibonacci(n-1) + NthFibonacci(n-2); 
	
}