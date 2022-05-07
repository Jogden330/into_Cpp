#include <iostream>

using namespace std;

int getint();
int cubit(int val);

int main()
{
	int x, cubed;

	x = getint();
	cubed = cubit(x);

	cout << "The number you entered is " << x << endl;
	cout << "that number cubed it " << cubed << endl;

	return 0;
}

int getint()
{
	int x;

	cout << "Enter a number" << endl;
	cin >> x;

	return x;
}

int cubit(int val)
{
return val * val * val;
}