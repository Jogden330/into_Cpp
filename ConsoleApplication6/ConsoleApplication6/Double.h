/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
prototiping my double class

*/
#ifndef DOABLE
#define DOABLE
#include "Integer.h"
#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::ostream;
using std::istream;



class Double
{
private:
	double myDouble;
	bool isNaN(string s);
public:
	string toString();
	Double equals(double d);
	Double equals(string s);
	double toDouble();
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double dev(const Double &d);

	//constructors
	Double();
	Double(double num);
	Double(const Double &numb);
	Double(Integer &num);
	Double(string s);

	//opperator overlode
	Double operator + (const Double &d);
	Double operator - (const Double &d);
	Double operator * (const Double &d);
	Double operator / (const Double &d);
	Double operator = (const Double &d);
	Double operator = (double d);
	Double operator = (string s);
	bool operator == (const Double &d);
	bool operator == (double d);
	bool operator != (const Double &d);
	friend ostream &operator << (ostream &output, Double &d);
    friend istream &operator >> (istream &input, Double &d);
};

#endif 
