 /*

Jonathan Ogden
0211330
10/2/13
Assignment 11
suming up chars


*/


#include <iostream>
#include <ctype.h>


using namespace std;

int sumConsonants(int let1, int let2);

int main()
{
	char let1,let2;
	int sum;

	cout << "Enter two uppercase numbers" << endl;
	cin >> let1 >> let2;

	
	
	
	sum = sumConsonants(let1,let2);

	cout << "the ascii some of those consonants is " << sum << endl;

	return 0;
}

int sumConsonants(int let1, int let2)
{
	int sum = 0;
	if(let1 > let2)
	{
		int temp;
		temp = let1;
		let1 = let2;
		let2 = temp;
    }
	if(isupper(let1) && isupper(let2))
	{
		for(char i = let1; i < let2 + 1; i++) 
		{
			if( i !='A' && i !='E' && i !='I' && i !='O' && i !='U')
			{
				sum += static_cast<int>(i);
			}

		}
	    return sum;
	}else{
		return -1;
	}
}