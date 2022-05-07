/*
Jonathan 
Ogden
0211330
11/20/13
assinment 17
A tic tac toe game

*/
#include <iostream>

using namespace std;

void createGameBoard(char bd[][3]);
void printBoard(char bd[][3]);
bool markSpace(char bd[][3], int row, int col);
bool gameOver(char game[][3], char &whoWon);

int main()
{
	char board[3][3];
	bool finish = false;
	int X,Y;
	int count = 0;
	char winner = ' ';
	createGameBoard(board);
	printBoard(board);

	while(finish == false)
	{
		cout << "Enter two position bettween 1 and 3" << endl;
		cin >> X >> Y;
		while(X > 3 || Y > 3 || X < 1 || Y < 1)
		{
			cout << "Sorry Not a valid position" << endl;
			cout << "Enter two position bettween 1 and 3" << endl;
			cin >> X >> Y;
		}
		while(markSpace(board,X-1,Y-1) == false) // esayer to play from 1 to 3
		{
			cout << "Sorry position already taken" << endl;
			cout << "Enter a position bettween 1 and 3" << endl;
			cin >> X >> Y;
		}
		printBoard(board);
		count++;
		finish = gameOver(board,winner);
		if(finish == true && count < 9)
		{
		cout << winner << " Wins" << endl;
		}
		else if(finish == false && count == 9)
		{
			cout << "Cats Game" << endl;
			break;
		}

	}

	return 0;
}

void createGameBoard(char bd[][3])
{
	for(int row = 0; row < 3; row++)
	{
		for(int cal = 0; cal < 3; cal++)
		{
			bd[row][cal] = '-';
		}
	}

}

void printBoard(char bd[][3]) 
{
	for(int row = 0; row < 3; row++)
	{
		for(int cal = 0; cal < 3; cal++)
		{
			cout << bd[row][cal] << "\t";
		}
		cout << endl;
	}

}

bool markSpace(char bd[][3], int row, int col)
{
	static bool Xtern = false;

	Xtern = !Xtern;

	if(bd[row][col] == '-')
	{
		if(Xtern)
		{
			bd[row][col] = 'X';
			system("CLS");
			//printBoard(bd);
			return true;

		}
			else
		{

			bd[row][col] = 'O';
			system("CLS");
			//printBoard(bd);
			return true;

		}
	
	}else{

	Xtern = !Xtern; // added so that if the position was taken would still be thare turn
	return false;

	}

}

bool gameOver(char game[][3], char &whoWon)
{
	char winner = ' ';

	if(game[0][0] != '-')
	{
		if(game[0][0] == game[1][1] && game[0][0] == game[2][2])
		{
			winner = game[0][0];
		}
	}
	else if(game[0][2] != '-')
	{
        if(game[0][2] == game[1][1] && game[0][2] == game[2][0])
		{
			winner = game[0][2];
		}
	}
		
	{
		for(int row = 0; row < 3; row++)
		{
			if(game[row][0] != '-')
			{
				if(game[row][0] == game[row][1] && game[row][0] == game[row][2])
				{
					winner = game[row][0];
					break;
				}
			}
			 if(game[0][row] != '-')
			{
				if(game[0][row] == game[1][row] && game[0][row] == game[2][row])
				{
					winner = game[0][row];
					break;
				}
			}

		}
	}
	if(winner == ' ')
	{
		return false;
	}
		else
	{
		whoWon = winner;
		return true;

	}


}