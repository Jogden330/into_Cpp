#include <iostream>

using namespace std;

void getInts(int &a, int &b);
void swap(int &a,int &b);
void sort(int &a, int &b, bool dessend = true);

int main()
{

	int x,y;

	getInts(x,y);
	cout << x << " " << y << endl;
	swap(x,y);
	cout << x << " " << y << endl;
	sort(x,y,false);
	cout << x << " " << y << endl;

	return 0;
}

void getInts(int &a, int &b)
{
	cout << "Enter two valuse" << endl;
	cin >> a >> b;

}
void swap(int &a,int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void sort(int &a, int &b, bool dessend)
{
	if(dessend)
	{
		if(a > b)
			swap(a,b);
	}else{
	    if(a < b)
			swap(a,b);
	
	}


}