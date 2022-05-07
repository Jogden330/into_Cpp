 /*

Jonathan Ogden
0211330
12/11/13
Assignment 19-20
main - menu input and suprutens that work with ToDo


*/


#include "ToDo.h"

using namespace std;



int main()
{
	char choice;
	do
	{
		menu(); //i added some couts and cins to the functions in main i hope that is ok becase thy were not requerd
		cin >> choice;
		options(toupper(choice));
		cout << endl;
		system("PAUSE");


	}while(toupper(choice) != 'X');
	cout << "thank you" << endl << endl;
	system("PAUSE");

	return 0;
}

void menu()
{
	system("CLS");
	cout << "enter the letter corasponding to the action you would like to preform" << endl;
	cout << "A: to Add to the to do list" << endl;
	cout << "N: to show the Next item on the to do list" << endl;
	cout << "P: to search by Pirority" << endl;
	cout << "L: to show the to do List" << endl;
	cout << "X: to eXit the program" << endl;
}

void options(char c)
{
	switch (c)
	{
	case 'A': 
		addsub();
		break;
	case 'N':
		nextsub();
		break;
	case 'P': 
		prisub();
		break;
	case 'L':
		printToDo();
		break;
	case 'X' :
		break;
	default:
		cout << "I'm sorry that was not a valid entry" << endl;
		break;
	}
}
void addsub()
{
	system("CLS");

	string dis, date;
		int pri;

		cout << "Enter a short discription" << endl;
		cin.ignore();
		getline(cin,dis);		
		cout << "enter the date the task should be completed" << endl;
		cin >> date;
		cout << "set the priority" << endl;
		cin >> pri;
		
        if(addToList(dis,date,pri))
		{
			cout << "Add was sussesful" << endl;
		}else{
			cout << "Im sorry to do list is full" << endl;
		}
}
void nextsub()
{
	MyToDo nexttodo;
	if(getNextItem(&nexttodo))
	{
		cout << nexttodo.Description << endl;
		cout << nexttodo.date << endl;
		cout << nexttodo.priority << endl;
	}else{
		cout << "im sorry thare are no iteams on your to do list"  << endl;
	}
}

void prisub()
{
	MyToDo samepritodo[100];
	int serchnume;
	cout << "Pease enter the priority number you are looking for" << endl;
	cin >> serchnume;
	if(getByPriority(samepritodo,serchnume))
	{
		MyToDo *p = samepritodo;
	
		while (p->Description != "*&9*^$@@lkhoiehwfoh ecubceiubcu .5664.#@#$")
		{
			cout << endl << p->Description << endl;
			cout << p->date << endl;
			cout << p->priority << endl;
			p++;
		}
	}else{
		cout << "Im sorry thare were on mathing prioritys" << endl;
	}
}