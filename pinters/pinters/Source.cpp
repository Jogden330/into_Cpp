#include <iostream>

using namespace std;

struct Player
{
	char Name[50];
	double average;
};

void setPlayers(Player *p, int size);
void getPlayers(Player p[], int size);

int main()
{
	const int Number_of_Players = 3;

	Player p[Number_of_Players];

	setPlayers(p,Number_of_Players);
	getPlayers(p,Number_of_Players);


	return 0;
}

void setPlayers(Player *p, int size)
{
	for(int i = 0; i < size; i++, p++)
	{
		cout  << "Enter Player's Name: ";
		cin >> p->Name;
		cout  << "Emter Player's Batting Average: ";
		cin >> p->average;
	}

}

void getPlayers(Player p[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << p[i].Name << " Had a Batting Average of: " << p[i].average << endl;
	}
}