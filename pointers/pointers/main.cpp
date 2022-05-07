#include <iostream> 

using namespace std; 

void one(); 
void two(); 
void three(); 
void four(); 

int main() 
{ 
	void (*func[4])(); 
	
	
	func[0] = one; 
	func[1] = two; 
	func[2] = three; 
	func[3] = four; 
	
	for (int i = 0; i <= 3; i++)
	{
		func[i](); 
	}
} 

void one() 
{ 
	cout << "Hello world, from One" << endl;
}

void two() 
{ 
	cout << "Hello world, from Two" << endl;
} 

void three() 
{ 
	cout << "Hello world, from Three" << endl;
} 

void four()
{
	cout << "Hello world, from Four" << endl; 
}