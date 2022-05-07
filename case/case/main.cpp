#include <iostream>

using namespace std;

int main()
{
	char input;

	cout << "enter a letter " << endl;

	cin >> input;

	char anser = toupper(input);

	switch(anser)
	{
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
			cout << "the letter you entered could be yoused in a musical scale" << endl;
			break;
	}


}