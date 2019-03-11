#include "ManyFunctions.h"
#include <iostream>
using namespace std;
int main() {
    // make sure to run your functions!
    int n = 4;
    int m = 6;
   
    vector<int> myvec = Multiples(n,m);
    
    for (int i = 0 ; i < myvec.size(); i++) {
        cout << myvec[i] << endl;
