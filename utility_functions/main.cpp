#include "ManyFunctions.h"
#include <string>
#include <vector>
#include <iostream>

void testVectorTimesN() {
	std::vector<int> testVectorTimesN = {1,2,3};
	testVectorTimesN = VectorTimesN(testVectorTimesN,4);
	for (int i = 0; i < testVectorTimesN.size(); i++){
		std::cout << testVectorTimesN[i] << " ";
	}
	std::cout << std::endl;
}
/**
    Jasmine R. Elizabeth Q. Allen K.
    This program returns a string with the first instance of a string removed
    from another string if present
**/
void TestRemoveFirstSubstring(){
     std::string old_string = "How are you?";
    std::string find_string = "are";
    std::cout<<"String before removal: "<<old_string<<std::endl;
    std::string new_string = RemoveFirstSubstring(find_string, old_string);
    std::cout<<"String after removal: "<<new_string<<std::endl;
}
/**
 * @brief Test the ReturnTwos function to verify matches given cases in header
 * 
 */
void TestReturnTwos();

int main() {
    // make sure to run your functions!
    std::cout <<"7th fibonacci Number"<<std::endl;
    std::cout << NthFibonacci(7) << std::endl;
    std::cout << "Testing RemoveAllSubstrings" << std::endl;
    std::cout << RemoveAllSubstrings("Banana", "nana") << std::endl;
    std::cout<<RemoveAllSubstrings("This is a this is a string", "is")<<std::endl;
    std::cout<<RemoveAllSubstrings("", "")<<std::endl;
    std::cout<<RemoveAllSubstrings("blah", "very blah")<<std::endl;
    std::cout<<"Program terminated successfully"<<std::endl;

    TestReturnTwos();

	testVectorTimesN();
  
    TestRemoveFirstSubstring();

    // Begin section for Matt and Paul's testing MatchVectors function
    std::vector<int> a;
    std::vector<int> b;
    std::vector<int> c;
    for (int x = 0; x < 10; x++)
    {
        a.push_back(x);
    }
    for (int y = 0; y < 5; y++)
    {
        b.push_back(y*2);
    }

    c = MatchVectors(a, b);

    // Prints the result of testing MatchVectors.
    // This should print only the odd numbers between 0 and 10,
    // since all of the even numbers should have been removed
    // by calling MatchVectors.
    for (unsigned int z = 0; z < c.size(); z++)
    {
        std::cout << c[z] << " ";
    }
    std::cout << std::endl;
    // End section of testing Matt and Paul's MatchVectors
}

void TestReturnTwos()
{
    int sixteen = 16;
    int seven = 7;
    int twenty_six = 26;
    int fifty_two = 52;

    std::cout << sixteen << " -> " << RemoveTwos(sixteen) << std::endl;
    std::cout << seven << " -> " << RemoveTwos(seven) << std::endl;
    std::cout << twenty_six << " -> " << RemoveTwos(twenty_six) << std::endl;
    std::cout << fifty_two << " -> " << RemoveTwos(fifty_two) << std::endl;
}
