#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int randRang(int min, int max);

int main()
{
	int min, max;
   srand((unsigned int)time(0));

   cout << "Enter min val" << endl;
   cin >> min;

   cout << "Enter max val" << endl;
   cin >> max;
   system("cls");

   for(int j = 0; j < 10; j++)
   {
	for(int i = 0; i < 10; i++)
	{
		   cout <<  randRang(min ,max) << "\t";
   
	}
	cout << endl;
   }
   return 0;
}

int randRang(int min, int max)
{
	return rand()% (1 +max - min) +min;

}