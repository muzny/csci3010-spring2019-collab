#include "ManyFunctions.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string jumble = "hello//and//world";
    vector<string> words = ManyFunctions.Split(jumble, "//");
	for(int i = 0; i < words.size(); i++){
		cout << words.at(i) << endl;
	}
}
