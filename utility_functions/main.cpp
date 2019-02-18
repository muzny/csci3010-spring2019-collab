#include "ManyFunctions.h"
#include <iostream>
#include <vector>

int main() {
    std::cout<<"EvenMask:"<<std::endl;
    std::vector<int> int_vector = {1,2,3,4,5,6};
    std::vector<bool> boolean_vector = EvenMask(int_vector);
    std::cout<<"convert ";
    for (int i = 0; i < int_vector.size(); ++i)
    {
        std::cout<<int_vector[i]<<" ";
    }
    std::cout<<" into: ";
    for (int i = 0; i < boolean_vector.size(); ++i)
    {
    	std::cout<<boolean_vector[i]<<" ";
    }
    std::cout<<std::endl;
    
    std::vector<int> int_vector2 = {8888,76757,4567,88890,67532};
    std::vector<bool> boolean_vector2 = EvenMask(int_vector2);
    std::cout<<"convert ";
    for (int i = 0; i < int_vector2.size(); ++i)
    {
        std::cout<<int_vector2[i]<<" ";
    }
    std::cout<<" into: ";
    for (int i = 0; i < boolean_vector2.size(); ++i)
    {
        std::cout<<boolean_vector2[i]<<" ";
    }
    std::cout<<std::endl;
    // make sure to run your functions!
  
    std::cout << "Testing RemoveAllSubstrings" << std::endl;
    std::cout << RemoveAllSubstrings("Banana", "nana") << std::endl;
    std::cout<<RemoveAllSubstrings("This is a this is a string", "is")<<std::endl;
    std::cout<<RemoveAllSubstrings("", "")<<std::endl;
    std::cout<<RemoveAllSubstrings("blah", "very blah")<<std::endl;
    std::cout<<"Program terminated successfully"<<std::endl;

    TestReturnTwos();

	testVectorTimesN();

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

void testVectorTimesN() {
	std::vector<int> testVectorTimesN = {1,2,3};
	testVectorTimesN = VectorTimesN(testVectorTimesN,4);
	for (int i = 0; i < testVectorTimesN.size(); i++){
		std::cout << testVectorTimesN[i] << " ";
	}
	std::cout << std::endl;
}

/**
 * @brief Test the ReturnTwos function to verify matches given cases in header
 * 
 */
void TestReturnTwos();

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
