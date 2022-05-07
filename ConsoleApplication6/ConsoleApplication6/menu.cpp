/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
a menu program

*/
#include <iostream>
#include <cstdlib>


#include "menu.h"

Menu::Menu()
:	count(0)
{
	
	
}


void Menu::addMenu(char *Description, void (*f)(void))
{
		
		this->mi.push_back(menuItem());
		this->mi[count].func = f;
		strcpy(this->mi[count].decript, Description);
		count++;

}

void Menu::runMenu()
{
	for(;;)
	{
		system("cls");
		for(int i = 0; i < count; i++)
		{
			std::cout << this->mi[i].decript << std::endl;
		}
		runSelection();
	}

}
void Menu::runSelection()
{
	int selection;

	std::cin >> selection;
	if(selection <= count)
	{
		this->mi[selection - 1].func();
	}
}