 /*

Jonathan Ogden
0211330
12/11/13
Assignment 19-20
ToDo - functons to work with an array of MyToDo struts


*/


#include "ToDo.h"


MyToDo ToDo[100];
int last = 0;
int curent = 0;

bool addToList(MyToDo newtodo)
{
	if(last < 101)
	{
		ToDo[last] = newtodo;
		last++;
		return true;
	}else{
		return false;
	}
}

bool addToList(string Des,string Date, int pri)
{
	if(last < 101)
	{
		ToDo[last].Description = Des;
		ToDo[last].date = Date;
		ToDo[last].priority = pri;
		last++;
		return true;
	}else{
		return false;
	}

}

bool getNextItem(MyToDo *todo)
{
	
	if(last == 0)
	{
		return false;
	}else{
		todo-> Description = ToDo[curent].Description;
		todo-> date = ToDo[curent].date;
		todo-> priority = ToDo[curent].priority;
        
		curent++;
		if(curent >= last)
		{
			curent = 0;
		}
		return true;
	}

}

bool getNextItem(string &Des,string &Date, int &pri)
{
	
	if(last == 0)
	{
		return false;
	}else{
		Des = ToDo[curent].Description;
		Date = ToDo[curent].date;
		pri = ToDo[curent].priority;
			curent++;
		if(curent >= last)
		{
			curent = 0;
		}
		return true;
	}
}

bool getByPriority(MyToDo todoarray[],int serchpriority)
{
	int place = 0;
	bool success = false;

	for(int i = 0;i < last; i++)
	{
		if(ToDo[i].priority == serchpriority)
		{
			todoarray[place].Description = ToDo[i].Description;
			todoarray[place].date = ToDo[i].date;
			todoarray[place].priority = ToDo[i].priority;
			place++;
			success = true;
		}
	
	}
	if(success == true)
	{
		todoarray[place].Description = "*&9*^$@@lkhoiehwfoh ecubceiubcu .5664.#@#$";//my atemp at a code 	
		return true;
	}else{
		return false;
	}
}

void printToDo()
{
	for(int i = 0; i < last; i++)
	{
		cout << endl << ToDo[i].Description << endl;
		cout << ToDo[i].date << endl;
		cout << ToDo[i].priority << endl;
	}
}