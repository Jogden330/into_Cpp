#include <iostream>
#include <string>

using namespace std;

int main()
{
	string quotes[] = {"got to ceach them all", "super fighting robot", "its morphin time"};
	int index[] = {2,0,1};

	for(int i = 0; i < 3; i++)
		cout << quotes[index[i]] << endl;



	return 0;
}