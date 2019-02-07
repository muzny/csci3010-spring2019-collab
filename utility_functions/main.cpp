#include "ManyFunctions.h"

using namespace std;

int main() {
   
    vector<int> test_vector{2, 4, 5, 7, 9, 10, 11, 12};

    vector<int> test_vector2 = MultiplesFilter(test_vector, 2);

    for(int i = 0; i < test_vector2.size(); i++)
    {
    	cout << test_vector2[i] << endl;
    }
}
