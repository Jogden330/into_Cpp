/*
Jonathan 
Ogden
0211330
9/4/13
assinment 4
ticket discount prossesor 

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int numPeaple;

	cout << "How Many Tickets Wold You Like To Perchess" << endl;
	cin >> numPeaple;
	
	double discount; 

	if(numPeaple >= 20)
	{
		discount = 0.22;
	}else{
		discount = 0.045;
	}

	double price = numPeaple * 9.75;
	double totalDis = price * discount;

	cout  << "The Cost Of The Tickets is $"<< fixed <<  setprecision(2) << price - totalDis << endl;
	cout << "You Saved $" << fixed <<  setprecision(2) << totalDis << endl; 


	return 0;
}