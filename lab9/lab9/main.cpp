
 /*

Jonathan Ogden
0211330
9/25/13
Assignment 9
converting temps

they program gos all craz on me if the int isnt inputs as an int. if thare a goog way to fix that?
*/


#include <iostream>
#include <ctype.h>


using namespace std;


int main()
{
	char con = 'X';
	double temp = 0;
	double far = 0;

	cout << "Converts to Fahrenheit" << endl;
	cout << "Temp Types are" << endl;
	cout << "K - Kelvin" << endl;
	cout << "C - Celsius" << endl;
	cout << "N - Newton" << endl;
	cout << "X - eXit" << endl;

	cout <<endl;
	
	cout << "Enter a Temp and Type" << endl;
	cout << "example 32 c" << endl;

	cin >> temp >> con;
	con = toupper(con);

	cout <<endl;

	while(con != 'X')
	{ 
		
	  switch(con)
	  {
		  case 'C': far = temp * 9/5 + 32;  break;
	      
		  case 'K': far = (temp - 273.15) * 1.8000 + 32; break;

		  case 'N': far = temp * 60 / 11 + 32; break;

		  case 'X': break;
          
		  default:
			  cout << endl;
			  cout << "I'M sorry that wasnt a valide entry" << endl;
			  cout << "Enter a Temp and Type" << endl;
	          cin >> temp >> con;
	          con = toupper(con);
			  continue;
			  break; 
	  }
	  cout << temp << con << " is " << far << " in Fahrenheit" << endl;

      cout << endl;

	  cout << "Enter a Temp and Type" << endl;
	  cin >> temp >> con;
	  con = toupper(con);

	}

	cout << "Thank You" << endl;


	system("pause");
	return 0;
}

