#include "ManyFunctions.h"


std::string RemoveAllSubstrings(std::string s1, std::string s2) {

	size_t pos = std::string::npos;

	if(s1.length() < s2.length()) return s1;
	if(s1 == s2) return "";
	while((pos = s1.find(s2)) != std::string::npos) {
		s1.erase(pos, s2.length());
	}

	return s1;
}
