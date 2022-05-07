/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
difinning my double class

*/
#include "Double.h"



Double::Double()
	:myDouble(0.0)
{}

Double::Double(double num) 
	:myDouble(num)
{}

Double::Double(const Double &num)  
{
	this->myDouble = num.myDouble;
}
Double::Double(Integer &i) 
{

 equals((double) i.toInt());

}
Double::Double(string s)
{
	if(isNaN(s))
	{
		this->myDouble = std::stod(s);
	}
	else
	{
		std::cout << "Number Format Earror: Not A Double" << std::endl;
	}
}
bool Double::isNaN(std::string s)
{
	int dec = 0;
	for(unsigned int i = 0; i < s.length();i++)
	{
		if(!std::isdigit(s[i]) && s[i] != '.')
		{
			return false;
		}
		if(s[i] == '.')
		{
			dec++;
		}
	
	}
	if(dec > 1)
	{
		return false;
	}
	
	return true;

}
string Double::toString()
{
	return std::to_string(myDouble);
}
Double Double::equals(double d) 
{
	return this->myDouble = d;
}
Double Double::equals(string s) 
{
    if(isNaN(s))
	{
		return this->myDouble = std::stod(s);
	}
	else
	{
		std::cout << "Number Format Earror: Not A Double" << std::endl;
		return NULL;
	}
}
double Double::toDouble()
{
	return myDouble;
}

Double Double::add(const Double &d) 
{
	Double temp;
	temp.myDouble = myDouble + d.myDouble;
	return temp;
}
Double Double::sub(const Double &d)  
{
	Double temp;
	temp.myDouble = myDouble - d.myDouble;
	return temp;
}
Double Double::mul(const Double &d)
{
	Double temp;
	temp.myDouble = myDouble * d.myDouble;
	return temp;
}
Double Double::dev(const Double &d)
{
	Double temp;
	temp.myDouble = myDouble / d.myDouble;
	return temp;
}
Double Double::operator + (const Double &d)
{
	return this->add(d);
}
Double Double::operator - (const Double &d)
{
	return this->sub(d);
}
Double Double::operator * (const Double &d)
{
	return this->mul(d);
}
Double Double::operator / (const Double &d)
{
	return this->dev(d);
}
Double Double::operator = (const Double &d)
{
	return  this->myDouble = d.myDouble;
}
Double Double::operator = (double d)
{
	this->equals(d);
	return *this;
}
Double Double::operator = (string s)
{
	this->equals(s);
	return *this;
}
bool Double::operator == (double d)
{
	return (this->myDouble == d);
	
}
bool Double::operator == (const Double &d)
{
	return (this->myDouble == d.myDouble);
	
}
bool Double::operator != (const Double &d)
{
	return	(this->myDouble != d.myDouble);
	
}
ostream &operator << (ostream &output, Double &d)
{
	output << d.myDouble << std::endl;
	return output;
}
istream &operator >> (istream &input, Double &d)
{
	
	input >> d.myDouble;
	return input;
}
