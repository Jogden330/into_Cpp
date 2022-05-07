 /*

Jonathan Ogden
0211330
10/30/13
Assignment 14

ascii charicters from strings

*/
#include <iostream>
#include <string>

using namespace std;

int sumAscii(string sta);
int sumAscii(string sta, string stb);

int main()
{
	int ascii;
	string first, second; 

	cout << "Enter two strings " << endl;

	cin >> first >> second;

	 sumAscii(first);

	cout << "The sum of the ascii characters of these two strings is " << sumAscii(first, second) << endl;


	return 0;
}
int sumAscii(string sta)
{
	int sum = 0;

	for(int i = 0; i < sta.length(); i++)
	{
		sum += sta[i];
	}

	return sum;
}
int sumAscii(string sta, string stb)
{
	int sum1, sum2;
	sum1 = sumAscii(sta);
	sum2 = sumAscii(stb);

	return sum1 + sum2;

}