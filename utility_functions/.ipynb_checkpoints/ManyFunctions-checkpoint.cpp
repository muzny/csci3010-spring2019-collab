#include "ManyFunctions.h"

std::string Join(std::vector<std::string> pieces, std::string glue){
	
	std::string result;
	
	for (int i =0; i<pieces.size();i++){
		if(i<(pieces.size()-1)){
			result += pieces[i] + glue;
		}else{
			result += pieces[i];
		}
	}
	return result;
}
