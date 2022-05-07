 /*

Jonathan Ogden
0211330
10/9/13
Assignment 12

Pythagorean Theorem

*/

#include <iostream>
#include <cmath> 

using namespace std;

double pythag(double sid1, double sid2, char solv);

int main()
{
	double A,B,C;

	cout << "Pythagorean Theorem, Enter side A and side B and i will solve for C " << endl;
	cin >> A >> B;
	C = pythag(A, B, 'C');
	cout << "Side C is equile to " << C << endl;
	cout << endl;

	cout << "Now Enter side B and C and i will solve for A" << endl;
	cin >> B >> C;
	A = pythag(B,C,'A');
	cout << "Side A is equile to " << A << endl;
	cout << endl;

	cout << "Finally, Enter side A and C and i will solve for B " << endl;
	cin >> A >> C;
	B = pythag(A,C,'B');
	cout << "Side B is " << B << endl;

	system("PAUSE");
	return 0;
}

double pythag(double sid1, double sid2, char solv)
{
 if(solv == 'C')
	 return sqrt(pow(sid1,2)+pow(sid2,2));
 else
	 return sqrt(pow(sid2,2)-pow(sid1,2));

}