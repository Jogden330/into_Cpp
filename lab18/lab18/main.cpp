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

int removeChar(char *str,char del = ' ');




int main()
{

	char str[100];
	char del;

	cout << "enter a sentence" << endl;

	cin.getline(str, 99);

	cout << "enter a caricter to be removed" << endl;

	cin >> del;

	int count = removeChar(str,del);

	cout << str << " you had " << count << " of " << del << endl;



	return 0;
}

int removeChar(char *str,char del)
{
	
	char *temp = str;
	
	int count = 0;


	while(*str)
	{
		if (*str == del)
		{
			
			count ++;
		}else{

		    *temp = *str;		
			temp++;
			
	    }
		str++;
	}
	*temp = '\0';

    str = temp;
	return count;

}