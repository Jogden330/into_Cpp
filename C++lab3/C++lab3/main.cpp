 /*

Jonathan Ogden
0211330
8/28/13
Assignment 3
calculating temp

*/


#include <iostream>

using namespace std;

int main()
{

	int intFar;

	cout << "Enter the degrees in Fahrenheit: " << endl;
	cin >> intFar;

	int intCels = (intFar - 32) * 5/9;
	cout << "In Celsius the temp is: " << intCels << endl;

	double dubKev = (intFar - 32) * 5/9 + 273.15;
	cout<< "In Kelvin the temp is : " << dubKev << endl;
	


	
	return 0;
}