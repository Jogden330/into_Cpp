
 /*

Jonathan Ogden
0211330
10/2/13
Assignment 10
converting temps


*/


#include <iostream>
#include <ctype.h>


using namespace std;

double C2F(double temp);
double K2F(double temp);
double N2F(double temp);


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
	  case 'C': far = C2F(temp);   break;
	      
		  case 'K': far = K2F(temp); break;

		  case 'N': far = N2F(temp); break;

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

double C2F(double temp)
{
 return  temp * 9/5 + 32;
}

double K2F(double temp)
{
	return (temp - 273.15) * 1.8000 + 32;
}

double N2F(double temp)
{
	return temp * 60 / 11 + 32;
}