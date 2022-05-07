#include <iostream>
#include <iomanip>

using namespace std;



int main()
{
	int age;
	static double cost = 10.50;

	cout << "Happy Birthday. How Old Are You Today" << endl;

	cin >> age;
	
	double dis; 

	switch(age)
	{
		case 60: dis = 0.25; break;

		case 50: dis = 0.18; break;

		case 40: dis = 0.15; break;

		case 25: dis = 0.10; break;


		default: dis = 0.05; break;

	}

	
	double totalDis = dis * cost;
	double price = cost - totalDis;
		 
	cout  << "The Cost Of The Ticket is $"<< fixed <<  setprecision(2) << price << endl;
	     
	cout << "You Saved $" << fixed <<  setprecision(2) << totalDis << endl; 
    
	return 0;
}