#include <iostream>

using namespace std;

#include "menu.h"
#include "Double.h"

void addDouble();
void subDouble();
void subDouble();
void devDouble();

int main()
{
	Menu m;

	m.addMenu("1. Add Doubles", addDouble());
	m.runMenu();

}

}
void addDouble()
{
	Double dub1, doub2;
	cout << "enter to numbers to be added together " << end;
	cin >> dub1 >> dub2;
	
}

void subDouble()
{

}
void subDouble()
{

}
void devDouble()
{

}
