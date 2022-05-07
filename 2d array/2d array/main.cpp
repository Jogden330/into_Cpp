#include <iostream>
#include <ctime>

using namespace std;

void fillArray(int ar[][10],int size);
void printArray(int ar[][10],int size);
int countNumb(int ar[][10],int size,int fined);

int main()
{
	srand((unsigned int) time(0));
	const int size = 10;
	int count;
	int ar[10][10];
	fillArray(ar,size);
	printArray(ar,size);
	cout << "enter a number" << endl;
	cin >> count;
	cout << "your number appers " << countNumb(ar, size, count) << " times" << endl;


	return 0;
}
void fillArray(int ar[][10],int size)
{
	for(int row = 0; row < size; row++)
	{
		for(int cal = 0; cal < size; cal++)
		{
			ar[row][cal] = rand() % 101;
		}
	
	}

}
void printArray(int ar[][10],int size)
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
int countNumb(int ar[][10],int size,int fined)
{
	int count = 0;

	for(int row = 0; row < size; row++)
	{
		for(int cal = 0; cal < size; cal++)
		{
			if(ar[row][cal] == fined)
			{
			cout << "Number was found at position " << row + 1 << " " << cal + 1 << endl;
			count++;
			}
		}
	}
	return count;
}