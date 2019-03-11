#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>

std::vector<int> Multiples(int n,int m){
    
    std::vector <int> v;
    
    for(int i=1;i<=m;i++){ 
       int var = n*i;
       v.push_back(var);
    }
    
    return v;
