
 /*

Jonathan Ogden
0211330
9/25/13
Assignment 8
fliping a coin

*/

#include <iostream>
#include <ctype.h>
#include <ctime>

using namespace std;

int main()
{
	int bank = 10;
	int HorT;
	char guess, anser;

	srand((unsigned int)time(0));

	cout << "Welcome to the coin flip game. It cost a doller to play" << endl;
	cout << "If you guess right you win $2.00" << endl;

	do
	{
	    cout << "Would you like to play (Y/N)" << endl;
     	cin >> anser;
	    anser = toupper(anser);
		cout << endl;
	}while(anser != 'Y' && anser != 'N');
	

	

	while(anser == 'Y' && bank >= 1)
	{
		cout << "Your Bank is $" << bank << endl;
		bank -= 1;

		cout << "Guess Heads or Tails (H/T)" << endl;
		cin >> guess;

		guess = toupper(guess);
	    HorT = rand() % 2;	

		if(guess == 'H' || guess == 'T')
		{
			if(HorT == 1 && guess == 'H')
			{
				bank += 2;
				cout << "You Win it Was Heads!!" << endl;
			}
			else if(HorT == 0 && guess == 'H')
			{
				cout << "Im Sorry it came up Tils" << endl;
			}
			else if(HorT == 0 && guess == 'T')
			{
				 bank += 2;
				 cout << "You Win it Was Tails!!"  << endl;
			}
			else if (HorT == 1 && guess == 'T')
			{ 
				  cout << "Im Sorry it came up Heads" << endl;
			}
		}
	   else  
	   {
		   cout << "Im sorry that wasn't (H/T)" << endl;
       }
		cout << endl;

	  do
	  {
	     cout << "Would you like to play (Y/N)" << endl;
     	 cin >> anser;
	     anser = toupper(anser);
		 cout << endl;
	  }while(anser != 'Y' && anser != 'N');

	}
	if(bank < 1)
	{
		cout << "Im sorry you dont have enuf money" << endl;
	}
	cout << "Thank you for playing. Your bank is $" << bank << endl;
	cout << "Please come again soon" << endl;
    system("pause");

	return 0;
}