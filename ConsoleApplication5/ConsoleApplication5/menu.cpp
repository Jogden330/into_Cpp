/*
Jonathan 
Ogden
0211330
1/26/14
assinment 1
a menu program

*/
#include <iostream>
#include <cstdlib>

using namespace std;

#include "menu.h"

Menu::Menu()
:	count(0)
{


}
void Menu::addMenu(char *Description, void (*f)(void))
{
	
		this->mi[count].func = f;
		strcpy(this->mi.push_back.decript, Description);
		count++;

}

void Menu::runMenu()
{
	for(;;)
	{
		system("cls");
		for(int i = 0; i < count; i++)
		{
			cout << this->mi[i].decript << endl;
		}
		runSelection();
	}

}
void Menu::runSelection()
{
	int selection;

	cin >> selection;
	if(selection <= count)
	{
		this->mi[selection - 1].func();
	}
}