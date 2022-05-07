/*
Jonathan 
Ogden
0211330
11/13/13
assinment 16
filling 2d arrays and finding divisable numbers

*/
#include <iostream>
#include <ctime>

using namespace std;

void fill2dArray(int ar[][10],int size);
void print2dArray(int ar[][10],int size);
int getDivison(int ar[][10],int size,int dar[],int fined);
void printarray(int ar[],int size);

int main()
{
	srand((unsigned int) time(0));
	const int size = 10;
	int fined;
	int ar[10][10];
	int singalar[100];
	fill2dArray(ar,size);
	print2dArray(ar,size);
	cout << "enter a number to divide" << endl;
	cin >> fined;
    int twodsize = getDivison(ar,size,singalar,fined);
	cout << "thare are " << twodsize << " evenly divisible numbers. thy are" << endl;
	printarray(singalar,twodsize);

	return 0;
}
void fill2dArray(int ar[][10],int size)
{
	for(int row = 0; row < size; row++)
	{
		for(int cal = 0; cal < size; cal++)
		{
			ar[row][cal] = rand() % 100 +1;
		}
	
	}

}
void print2dArray(int ar[][10],int size)
{
	for(int row = 0; row < size; row++)
	{
		for(int cal = 0; cal < size; cal++)
		{
			cout << ar[row][cal] << "\t";
		}
	   cout << endl;
	}

}
int getDivison(int ar[][10],int size,int dar[], int fined)
{
	int count = 0;
	int i = 0;

	for(int row = 0; row < size; row++)
	{
		for(int cal = 0; cal < size; cal++)
		{
			if(ar[row][cal] % fined == 0)
			{
			dar[i] = ar[row][cal];
			count++;
			i++;
			}
		}
	}
	return count;
}
void printarray(int ar[],int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << ar[i] << endl;
	}
}