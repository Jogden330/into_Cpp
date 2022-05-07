#include <iostream>

using namespace std;

int getint();

int main()
{
	int x;

	x = getint();

	cout << "The number you entered is " << x << endl;


	return 0;
}

int getint()
{
	int x;

	cout << "Enter a number" << endl;
	cin >> x;

	return x;
}