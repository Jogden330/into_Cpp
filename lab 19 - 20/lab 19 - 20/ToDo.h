 /*

Jonathan Ogden
0211330
12/11/13
Assignment 19-20
ToDo.h - headers prototipes and the MyToDo struct 


*/


#ifndef _ToDo
#define _ToDo

#include <iostream>
#include <string>
#include  <locale>

using namespace std;

struct  MyToDo
{
	string Description;
	string date;
	int  priority;
};
bool addToList(MyToDo newtodo);
bool addToList(string Des,string Date, int pri);
bool getNextItem(MyToDo *todo);
bool getNextItem(string &Des,string &Date, int &pri);
bool getByPriority(MyToDo todoarray[],int serchpriority);
void printToDo();

void menu();
void options(char c);
void addsub();
void nextsub();
void prisub();

#endif