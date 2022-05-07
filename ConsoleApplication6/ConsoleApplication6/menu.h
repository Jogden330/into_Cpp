/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
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

	std::vector <menuItem> mi;
	int count;
	void runSelection();
public:
	Menu();
	void addMenu(char *Description, void (*f)());
	void runMenu();
	
	


};



#endif