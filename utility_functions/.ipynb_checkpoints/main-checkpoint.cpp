#include "ManyFunctions.h"
#include<vector>
#include<iostream>

int main() {
    // make sure to run your functions!
	std::string a_ = "Hello";
	std::string b_ = "World";
	std::string glue_ = " ";
	
	std::vector<std::string> string_set_;
	string_set_.push_back(a_);
	string_set_.push_back(b_);
	std::cout<<Join(string_set_, glue_)<<std::endl;
}
