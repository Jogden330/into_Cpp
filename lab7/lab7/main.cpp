 /*

Jonathan Ogden
0211330
9/19/13
Assignment 7
finding the largest and smallest numbers

*/
#include <iostream>

using namespace std;

int main()
{
	int countto;
    cout << "How Meany Numbers Wold You Like To Enter" << endl;
    cin >> countto;

    int large, small;
	

    for(int i = 0; i < countto; i++)
    {
       int temp;
	   cout << "Enter a Number" << endl;
	   cin >> temp;
	   
	   if(i == 0||temp > large)
		   large = temp;
	   if(i == 0||temp < small)
		   small =  temp;
    }
	cout << "Your Largest Number Was " << large << endl;
	cout << "Your Smallest Number Was " << small << endl;



	return 0;
}