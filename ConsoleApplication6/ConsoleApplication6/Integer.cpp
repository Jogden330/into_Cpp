/*
Jonathan 
Ogden
0211330
3/15/14
assinment 7
prototiping my int class

*/
#include "Integer.h"

Integer::Integer()
	:myInteger(0) 
{}

Integer::Integer(int num)
	:myInteger(num)
{}

Integer::Integer(const Integer &num)
{
	this->myInteger = num.myInteger;
}

Integer::Integer(string s)
{
	if(isNaN(s))
	{
		this->myInteger = std::stoi(s);
	}
	else
	{
		std::cout << "Number Format Earror: Not An Integer" << std::endl;
	}
}

Integer Integer::equals(int i)
{
	return myInteger = i;
}

int Integer::toInt()
{
	return myInteger;
}
Integer Integer::equals(string s) 
{
    if(isNaN(s))
	{
		return this->myInteger = std::stoi(s);
	}
	else
	{
		std::cout << "Number Format Earror: Not An Integer" << std::endl;
		return NULL;
	}
}
Integer Integer::add(const Integer &i)
{
	 Integer temp;
	 temp.myInteger = myInteger + i.myInteger;
	return  temp;
}	
Integer Integer::sub(const Integer &i)
{
	Integer temp;
	temp.myInteger = myInteger - i.myInteger;
	return  temp;
}
Integer Integer::mul(const Integer &i)
{
	Integer temp;
	temp.myInteger = myInteger * i.myInteger;
	return  temp;
}
Integer Integer::dev(const Integer &i)
{
	Integer temp;
	temp.myInteger = myInteger / i.myInteger;
	return  temp;
}
string Integer::toString()
{
	return std::to_string(myInteger);
}
Integer Integer::operator + (const Integer &i)
{
	return this->add(i);
}
Integer Integer::operator - (const Integer &i)
{
	return this->sub(i);
}
Integer Integer::operator * (const Integer &i)
{
	return this->mul(i);
}
Integer Integer::operator / (const Integer &i)
{
	return this->dev(i);
}
Integer Integer::operator = (const Integer &i)
{
	return this->myInteger = i.myInteger;
}
Integer Integer::operator = (int i)
{
	this->equals(i);
	return *this;
}
Integer Integer::operator = (string s)
{
	return this->equals(s);
}
bool Integer::operator == (const Integer &i)
{
	return (this->myInteger == i.myInteger);
	
}
bool Integer::operator == (int i)
{
	return (this->myInteger == i);


}
bool Integer::operator != (const Integer &i)
{
		return (this->myInteger != i.myInteger);

}
ostream &operator << (ostream &output, Integer &i)
{
	output <<  i.myInteger << std::endl;
	return output;
}
istream &operator >> (istream &input, Integer &i)
{
	input >> i.myInteger;
	return input;
}
bool Integer::isNaN(std::string s)
{
	int dec = 0;
	for(unsigned int i = 0; i < s.length();i++)
	{
		if(!std::isdigit(s[i]))
		{
			return false;
		}
	}
	
		return true;

}