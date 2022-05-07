/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
a main ,ethod to test my other funcrtions

*/

#include <iostream>

using namespace std;

#include "menu.h"
#include "Double.h"

void addDouble();
void subDouble();
void mulDouble();
void devDouble();
void addInt();
void subInt();
void mulInt();
void devInt();
void equDouble();
void notDouble();
void equInt();
void notInt();
void strDouble();
void strInt();



int main()
{
	Menu m;

	m.addMenu("1. Add Decimal", addDouble);
	m.addMenu("2. Subtraced Decimal", subDouble);
	m.addMenu("3. Moltaply Decimal", mulDouble);
	m.addMenu("4. Devide Decimal", devDouble);
	m.addMenu("5. Add Hole number", addInt);
	m.addMenu("6. Subtraced Hole Number",subInt);
	m.addMenu("7. Moltiply Hole Number",mulInt);
	m.addMenu("8. Devide Hole Number",devInt);
	m.addMenu("9. Decmial equal to",equDouble);
	m.addMenu("10. Decmial not equal to",notDouble);
	m.addMenu("11. Hole equal to",equInt);
	m.addMenu("12. Hole not equal to",notInt);
	m.addMenu("13. Double string",strDouble);
	m.addMenu("14. Integer string",strInt);
	m.runMenu();



}
void addDouble()
{
	Double *d1 = new Double();
	Double *d2 = new Double();
	Double *d3 = new Double();
	cout << "enter two numbers to be Added togethor" << endl;
	cin >> *d1 >> *d2;
	*d3 = *d1 + *d2;
	cout << "your anser is " << *d3 << endl;
	delete d1,d2, d3;
	system("pause");

}

void subDouble()
{
	Double *d1 = new Double();
	Double *d2 = new Double();
	Double *d3 = new Double();
	cout << "enter two numbers to be Subtraced" << endl;
	cin >> *d1 >> *d2;
	*d3 = *d1 - *d2;
	cout << "your anser is " << *d3 << endl;
	delete d1,d2,d3;
	system("pause");

}
void mulDouble()
{
    Double *d1 = new Double();
	Double *d2 = new Double();
	Double *d3 = new Double();
	cout << "enter two numbers to be Moltipled togethor" << endl;
	cin >> *d1 >> *d2;
	*d3 = *d1 * *d2;
	cout << "your anser is " << *d3 << endl;
	delete d1,d2,d3;
	system("pause");

}
void devDouble()
{
	Double *d1 = new Double();
	Double *d2 = new Double();
	Double *d3 = new Double();
	cout << "enter two numbers to be devided buy ecather " << endl;
	cin >> *d1 >> *d2;
	*d3 = *d1 / *d2;
	cout << "your anser is " << *d3 << endl;
	delete d1,d2,d3;
	system("pause");

}
void addInt()
{
	Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	Integer *i3 = new Integer();

	cout << "enter two numbers to be Added togethor" << endl;
	cin >> *i1 >> *i2;
	*i3 = *i1 + *i2;
	cout << "your anser is " << *i3 << endl;
	delete i1,i2,i3;
	system("pause");
}
void subInt()
{
	Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	Integer *i3 = new Integer();

	cout << "enter two numbers to be subtracted" << endl;
	cin >> *i1 >> *i2;
	*i3 = *i1 - *i2;
	cout << "your anser is " << *i3 << endl;
	delete i1,i2,i3;
	system("pause");
}
void mulInt()
{
	Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	Integer *i3 = new Integer();

	cout << "enter two numbers to be Multapled togethor" << endl;
	cin >> *i1 >> *i2;
	*i3 = *i1 * *i2;
	cout << "your anser is " << *i3 << endl;
	delete i1,i2,i3;
	system("pause");

}
void devInt()
{
	Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	Integer *i3 = new Integer();

	cout << "enter two numbers to be devided by ecather" << endl;
	cin >> *i1 >> *i2;
	*i3 = *i1 / *i2;
	cout << "your anser is " << *i3 << endl;
	delete i1,i2,i3;
	system("pause");
}
void equDouble()
{
	Double *d1 = new Double();
	Double *d2 = new Double();
	cout << "enter two numbers see if thy are equal" << endl;
	cin >> *d1 >> *d2;
	 if(*d1 == *d2)
		{
			cout << "they are equal "<< endl;
		}else{
			cout << "they are not equal" << endl;
		 }
	 delete d1,d2;
	system("pause");
}
void notDouble()
{
	Double *d1 = new Double();
	Double *d2 = new Double();
	cout << "enter two numbers see if thy are not equal" << endl;
	cin >> *d1 >> *d2;
	 if(*d1 != *d2)
		{
			cout << "they are not equal "<< endl;
		}else{
			cout << "they are equal" << endl;
		 }
	 delete d1,d2;
	system("pause");
}
void equInt()
{
    Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	cout << "enter two numbers see if thy are equal" << endl;
	cin >> *i1 >> *i2;
	 if(*i1 == *i2)
		{
			cout << "they are equal "<< endl;
		}else{
			cout << "they are not equal" << endl;
		 }
	 delete i1,i2;
	system("pause");
}
void notInt()
{
    Integer *i1 = new Integer();
	Integer *i2 = new Integer();
	cout << "enter two numbers see if thy are not equal" << endl;
	cin >> *i1 >> *i2;
	  if(*i1 != *i2)
		{
			cout << "they are not equal "<< endl;
		}else{
			cout << "they are  equal" << endl;
		 }
	  delete i1,i2;
	  system("pause");
}
void strDouble()
{
	
	Double *d1 = new Double();
	Double *d2 = new Double("5.5");
	Double *d3 = new Double();
	string *s = new string();
	cin >> *s;
	*d1 = *s;
	
	*d3 = *d2 + *d1;
	cout << d3->toString() << endl;
	delete d1,d2,d3,s;
	system("pause");
}
void strInt()
{
	Integer *i1 = new Integer();
	Integer *i2 = new Integer("5");
	Integer *i3 = new Integer();
	string *s = new string();
	cin >> *s;
	*i1 = *s;
	
	*i3 = *i2 + *i1;
	cout << i3->toString() << endl;
	delete i1,i2,i3,s;
	system("pause");
}
