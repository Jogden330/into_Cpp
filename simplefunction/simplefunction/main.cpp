#include <iostream>

using namespace std;

void printname();

int main()
{
	int times;
	
	cout << "How meny times would you like  me to print your name" << endl;
	cin >> times;

	for(int i = 0; i < times; i++)
	{
       printname();
	}

	return 0;
}

void printname()
{
	cout << "Jonathan Ogden" << endl;

}
