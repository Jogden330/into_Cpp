/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
difinning my int class

*/
#ifndef INTEGER
#define INTEGER

#include <iostream>
#include <string>
#include <cctype>
using std::string;
using std::ostream;
using std::istream;

class Integer
{
 private:
 int myInteger;
 bool isNaN(string s);

 public:
 Integer equals(int i);
 Integer equals(string s);
 int toInt();
 Integer add(const Integer &i);
 Integer mul(const Integer &i);
 Integer sub(const Integer &i);
 Integer dev(const Integer &i);
 string toString();

 //constructors
 Integer();
 Integer(int num);
 Integer(const Integer &num);
 Integer(string s);

 //overloded operators
 Integer operator + (const Integer &i);
 Integer operator - (const Integer &i);
 Integer operator * (const Integer &i);
 Integer operator / (const Integer &i);
 Integer operator = (const Integer &i);
 Integer operator = (int i);
 Integer operator = (string s);
 bool operator == (const Integer &i);
 bool operator == (int i);
 bool operator != (const Integer &i);
 friend ostream &operator << (ostream &output, Integer &i);
  friend istream &operator >> (istream &input, Integer &i);
};



#endif