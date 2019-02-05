#include "ManyFunctions.h"

using namespace std;

vector<int> MultiplesFilter(vector<int> v, int divides_by)
{
	for(int i = 0; i < v.size(); i++)
	{
		if((v[i] % divides_by == 0) && (v[i] != 0))
		{
			v.erase(i);
		}
	}
	return v;
}