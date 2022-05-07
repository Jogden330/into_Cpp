/*
Jonathan 
Ogden
0211330
1/26/14
assinment 1
the menu.h file

*/
#ifndef menu
#define menu
#include <vector>


struct menuItem
{
	void (*func)();
	char decript[50];


};

class Menu
{
private:
	vector <menuItem> mi;
	int count;
	void runSelection();
public:
	Menu();
	void addMenu(char *Description, void (*f)());
	void runMenu();

};



#endif