#include "ManyFunctions.h"
// By: Tyler Benson, Mohamed Abdalla

class ManyFunctions {
	
	vector<string> ManyFunctions::Split(string whole, string seperator){
	    vector<string> words;

		size_t pos = 0;
		std::string token;
		while ((pos = whole.find(seperator)) != std::string::npos) {
			token = whole.substr(0, pos);
			whole.erase(0, pos + seperator.length());
			words.push_back(token);
		}
		words.push_back(whole);
		return words;
	}
}
