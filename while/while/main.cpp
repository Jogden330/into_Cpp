#include <iostream>

using namespace std;


int main()
{
	int numb, sume = 0; 

	cout << "Enter a positive Number" << endl;
	cin >> numb;
	
	sume += numb;

	while(numb >= 0)
	{
		cout << "Enter a positive Number" << endl;

		cin >> numb;

		sume += numb;
		
	}

	cout << "Your total was " <<  sume << endl;

	system("pause");
	return 0;

}