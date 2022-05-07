 /*

Jonathan Ogden
0211330
10/9/13
Assignment 13

breaking apart numbers

*/
#include <iostream>

using namespace std;

bool breakThree(int number, int &num1,int &num2,int &num3); 

int main()
{
	int threedig, n1, n2 ,n3;
	cout << "Enter a three diget number" << endl;
	cin >> threedig;
	if(breakThree(threedig, n1, n2 ,n3))//i hope doing it like this is ok 
	{
		cout << n1 << endl;
		cout << n2 << endl;
		cout << n3 << endl;
	}else{
		cout << "that was not a three diget number" << endl;
    }
   return 0;
}
bool breakThree(int number, int &num1,int &num2,int &num3) 
{
	if(number > 999 || number < 100)
		return false;
	
	num3 = number % 10;
	number /= 10;
	num2 = number % 10;
	number /= 10;
	num1 = number % 10;
	
	return true;
}

