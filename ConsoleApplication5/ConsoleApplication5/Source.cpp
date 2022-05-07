/*
Jonathan 
Ogden
0211330
1/26/14
assinment 1
testing my menu

*/
#include <iostream>
#include <cstdlib>

using namespace std;

#include "menu.h"
#include "Double.h"

void func1();
void func2();
void func3();
void Exit();

int main()
{
	Menu m;


	m.addMenu("1. Add Doubles", doubleAdd);
	m.runMenu();

}

	
}
void func1()
{
	char c;
	cout << "hello from funtion 1" << endl;
	cin >> c;

}
void func2()
{
	char c;
	cout << "hello from funtion 2" << endl;
	cin >> c;

}
void func3()
{
	char c;
	cout << "hello from funtion 3" << endl;
	cin >> c;

}

void Exit()
{
	cout << "Good By" << endl;
	exit(0);
}