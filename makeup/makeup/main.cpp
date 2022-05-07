/*
Jonathan 
Ogden
0211330
12/1/13
assinment 18
working with pointers

*/
#include <iostream>

using namespace std;

int split(char *str,char (*splitstr)[100],char splitat = ' ');




int main()
{

	char str[100];
	char splitstr[100][100];
	char splitat =  ' ';

	cout << "enter a sentence" << endl;

	cin.getline(str, 99);
	

	int count = split(str,splitstr,splitat);

	
	for(int i = 0; i < count; i++)
	{
		while(*(splitstr)[count])
		{
			cout << splitstr;
			splitstr++;

		}
		cout << endl;
	}

	return 0;
}

int split(char *str,char (*splitstr)[100],char splitat)
{
	
	
	
	int count = 0;
	int words = 0;

	while(*str)
	{
		if (*str == splitat)
		{
			
		    *(splitstr)[words] = '\0';
			words++;
		}else{

		    *(splitstr)[words] = *str;		
			*splitstr++;
			
	    }
		str++;
	}
	

   
	return words;

}