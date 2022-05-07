#include <iostream>

using namespace std;

int main()
{
	char input;

	cout << "Do you like condy Y/N " << endl;

	cin >> input;

	char anser = toupper(input);

	if(anser == 'Y' )
	{
		
		cout << "Of cors you do" << endl;
	
	}else{

		cout << "lier" << endl;
	
	}   


	 return 0;
}
