// RR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;


void RR()
{
	srand(time(0));

	int rounds = 6;
	int bulletIndex = (rand() % rounds) + 1;
	int i =0;
	int turn =0;
	while (i < rounds)
	{
		int shooter = 0;
		if (turn == 0 || turn % 2 == 0)
		{
			
			cout << rounds - i << " rounds. 1 bullet. Who would you like to shoot? Player 1: ";
			cin >> shooter;
			cout << endl;

			if (i == bulletIndex)
			{
				if (shooter == 1)
				{
					cout << "Bang!  Player 1 died..." <<endl;
					break;
				}
				else
				{
					cout << "Bang! Player 2 died..." <<endl;
					break;
				}
			}
		}
		else if (turn % 2 != 0)
		{
			cout << rounds - i << " rounds. 1 bullet. Who would you like to shoot? Player 2: ";
			shooter = (rand() % 2) + 1;
			cout << shooter;
			cout << endl;

			if (i == bulletIndex)
			{
				if (shooter == 1)
				{
					cout << "Bang!  Player 1 died..." << endl;
					break;
				}
				else
				{
					cout << "Bang! Player 2 died..." << endl;
					break;
				}
			}
		}
		cout << "Click! It was a empty round!" << endl;
		
		if (i == rounds)
		{
			cout << bulletIndex;
		}

		i++;
		turn++;

	}


}

int main()
{
	string y;
	cout << "Welcome to Russian Roulette." << endl;
	cout << "To shoot yourself enter: 1. To shoot the bot enter 2: " <<endl;
	cout << "enter y to begin: " << endl;
	cin >> y;

	if (y == "y")
	{
		RR();
	}
}


