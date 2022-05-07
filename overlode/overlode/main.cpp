#include <iostream>

using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
int sum(int a, int b, int c, int d);

int main()
{
	int  w,x,y,z;

	cout << "enter 4 valuse" << endl;
	cin >> w >> x >> y >> z;

	cout << "the sum of the firt two numbers is " << sum(w,x) << endl;

	cout << "the sum of the firt three numbers is " << sum(w,x,y) << endl;

	cout << "the sum of the all the  numbers is " << sum(w,x,y,z) << endl;


	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
int sum(int a,int b,int c)
{
	return a + b + c;
}
int sum(int a, int b, int c, int d)
{
	return a + b + c + d;
}