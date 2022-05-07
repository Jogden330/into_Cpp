#include <iostream>

using namespace std;

int main()
{
    int x, y;

	cout << "Enter two valuse " << endl;

	cin >> x >> y;

	bool smaller = x < y;

	if(smaller)
		cout << x << " is less then " << y << endl;
	else
		cout << x << " is grater then " << y << endl;


}