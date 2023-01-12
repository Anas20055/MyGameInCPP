#include<iostream>
using namespace std;

char boardData[10] = { '0','1','2','3','4','5','6','7','8', '9' };


void boardDrawing()
{
	system("cls");
	cout << "\n\n\t    Tik-tak-toy\n";
	cout << "    Player-1 (X) | Player-2 (O)" << endl;
	cout << endl;
	cout << "\t _________________ " << endl;
	cout << "\t|     |     |     |" << endl;
	cout << "\t|  " << boardData[1] << "  |  " << boardData[2] << "  |  " << boardData[3] << "  | "<< endl;
	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;
	cout << "\t|  " << boardData[4] << "  |  " << boardData[5] << "  |  " << boardData[6] << "  | " << endl;
	cout << "\t|_____|_____|_____|" << endl;
	cout << "\t|     |     |     |" << endl;
	cout << "\t|  " << boardData[7] << "  |  " << boardData[8] << "  |  " << boardData[9] << "  | " << endl;
	cout << "\t|_____|_____|_____|" << endl<<endl<<endl;
}


int checkWin()
{
	if (boardData[1] == boardData[2] && boardData[2] == boardData[3])
	{
		return 1;
	}
	else if (boardData[4] == boardData[5] && boardData[5] == boardData[6])
	{
		return 1;
	}
	else if (boardData[7] == boardData[8] && boardData[8] == boardData[9])
	{
		return 1;
	}
	else if (boardData[1] == boardData[4] && boardData[4] == boardData[7])
	{
		return 1;
	}
	else if (boardData[2] == boardData[5] && boardData[5] == boardData[8])
	{
		return 1;
	}
	else if (boardData[3] == boardData[6] && boardData[6] == boardData[9])
	{
		return 1;
	}
	else if (boardData[1] == boardData[5] && boardData[5] == boardData[9])
	{
		return 1;
	}
	else if (boardData[3] == boardData[5] && boardData[5] == boardData[7])
	{
		return 1;
	}
	else if (boardData[1] != '1' && boardData[2] != '2' && boardData[3] != '3' &&
		boardData[4] != '4' && boardData[5] != '5' && boardData[6] != '6' &&
		boardData[7] != '7' && boardData[8] != '8' && boardData[9] != '9')
	{
		return 0;
	}
	else 
	{
		return -1;
	}
}
int main() 
{
	int player = 1, i, choice;
	char mark;
	do
	{
		boardDrawing();
		player = (player % 2) ? 1 : 2;
		cout << "    Player-" << player << " , choice number: ";
		cin >> choice;
		mark = (player == 1) ? 'X': 'O';
		if (choice == 1 && boardData[1] == '1')
		{
			boardData[1] = mark;
		}
		else if (choice == 2 && boardData[2] == '2')
		{
			boardData[2] = mark;
		}
		else if (choice == 3 && boardData[3] == '3')
		{
			boardData[3] = mark;
		}
		
		else if (choice == 4 && boardData[4] == '4')
		{
			boardData[4] = mark;
		}
		else if (choice == 5 && boardData[5] == '5')
		{
			boardData[5] = mark;
		}
		else if (choice == 6 && boardData[6] == '6')
		{
			boardData[6] = mark;
		}
		else if (choice == 7 && boardData[7] == '7')
		{
			boardData[7] = mark;
		}
		else if (choice == 8 && boardData[8] == '8')
		{
			boardData[8] = mark;
		}
		else if (choice == 9 && boardData[9] == '9')
		{
			boardData[9] = mark;
		}
		else 
		{
			cout << "    impossible to move,press Enter for try again  ";
			player--;
			cin.ignore();
			
		}
		i = checkWin();
		player++;

		
	} while (i == -1);
	boardDrawing();
	if (i == 1)
	{
		cout << "\t*** Player-" << player-1 << " Win *** ";
	}
	else 
	{
		cout << "\t    *** Draw ***";
		cin.ignore();
		cin.get();
	}

	
}