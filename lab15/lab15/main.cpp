/*
Jonathan 
Ogden
0211330
11/6/13
assinment 14
filling printing and counting things in arrays

*/
#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int array[], int size);
void  printArray(const int array[], int size);
int countEvens(const int array[], int size);

int main()
{
  const int MAX_NUMBER = 25;
  int rnums[MAX_NUMBER];

  fillArray(rnums, MAX_NUMBER);
  printArray(rnums, MAX_NUMBER);
  cout << "the number of even numbers is " << countEvens(rnums, MAX_NUMBER) << endl;

}

void fillArray(int array[], int size)
{
     srand(time(0));

	 for(int i = 0; i < size ; i++)
		 array[i] = rand() % 100 +1;
}
void  printArray(const int array[], int size)
{
     for(int i = 0; i < size; i++)
	 {
		
		 cout << array[i] << endl;
	 }
}
int countEvens(const int array[], int size)
{
	int even = 0;
	for(int i = 0; i < size; i++)
	{
		if(array[i] % 2 == 0)
		 even++;
	}

	return even;
}