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
    // Jeff-Sabrina-Will
    // Sum()
    int x = 7;
    int y = 10;
    std::cout << x << " + " << y << " = " << Sum(x, y) << std::endl;

    // VectorPlusN()
    std::vector<int> v{1, 2, 3, 4};

    std::cout << "v before call to VectorPlusN: ";
    for(int i : v) {
      std::cout << i << " ";
    }
    std::cout << "\n" << std::endl;

    std::vector<int> returned_vector = VectorPlusN(v, 5);

    std::cout << "v after call to VectorPlusN: ";
    for(int i : returned_vector) {
      std::cout << i << " ";
    }
    std::cout << "\n" << std::endl;
  
    // make sure to run your functions!

    // Tyler and Mohamed Split() test
    std::string jumble = "hello//and//world";
    std::vector<std::string> words = Split(jumble, "/");
    std::cout << "\nString to split: 'hello/and/world'" << std::endl;
    std::cout << "Delimiter: '//'" << std::endl;
    std::cout << "Result: " << std::endl;
    for(int i = 0; i < words.size(); i++){
      std::cout << words.at(i) << std::endl;
    }
    std::cout << std::endl;

    //Vomund and Hempy Sign Tests
    std::cout << Sign(-3) << std::endl;
    std::cout << Sign(10000) << std::endl;

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

    
    std::vector<int> test_vector{2, 4, 5, 7, 9, 10, 11, 12};

    std::vector<int> test_vector2 = MultiplesFilter(test_vector, 2);

    for(int i = 0; i < test_vector2.size(); i++)
    {
    	std::cout << test_vector2[i] << std::endl;
    }


    // make sure to run your functions!

    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(23);
    numbers.push_back(7);


    std::cout << "The sum is " << Sum(numbers) << std::endl;

    // Beginning of tests for Adam, Ash and Thomas' Product function
    // Initial test case for product.
    std::vector<int> test1;
    test1.push_back(3);
    test1.push_back(7);
    test1.push_back(5);
    // Test case for negative numbers
    std::vector<int> test2;
    test2.push_back(-1);
    test2.push_back(5);
    // Test case for 0.
    std::vector<int> test3;
    test3.push_back(4);
    test3.push_back(0);

    // Should return 105
    std::cout << Product(test1) << std::endl;
    // Should return -5
    std::cout << Product(test2) << std::endl;
    // Should return 0
    std::cout << Product(test3) << std::endl;
    // End of tests for Adam, Ash and Thomas' Product Function
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
