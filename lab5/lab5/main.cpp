#include <iostream>
#include <string>

using namespace std;

int main()
{
	  int num;
      
	  cout << "Enter a Number I Will Chaeck To See If Its Even or Odd" << endl;
	  
	  cin >> num;

	  string EorO;

	  EorO = num % 2 == 0 ? "Even" : "Odd"; 

	  cout << "The Number You Input Was " << EorO << endl;


		  return 0;
}