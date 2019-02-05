#include "ManyFunctions.h"
// By: Tyler Benson, Mohamed Abdalla

class ManyFunctions {
	
	vector<string> ManyFunctions::Split(string whole, string seperator){
		string s = whole;
		string delimiter = seperator;

		size_t pos = 0;
		std::string token;
		while ((pos = s.find(delimiter)) != std::string::npos) {
			token = s.substr(0, pos);
			std::cout << token << std::endl;
			s.erase(0, pos + delimiter.length());
		}
		words.push_back(s);
	}
}
