#include <iostream>
#include <stdlib.h>
#include "Dice.h"
#include "LoadedDice.h"
using namespace std;

int rollTwoDice(const Dice&, const Dice&);

int main(void)
{
	LoadedDice dice1(8), dice2(11);

	dice1.rollDice();
	cout << "\n";
	dice2.rollDice();

	//roll dice for 15 times
	for (int i = 0; i <= 15; i++)
	{
		int result = 0;
		result = rollTwoDice(dice1, dice2);
		cout << "Score: " << result << "\n";
	}
	
	system("pause");
	return 0;

}

// Take two dice objects, roll them, and return the sum
int rollTwoDice(const Dice& die1, const Dice& die2)
{
	return  die1.rollDice() + die2.rollDice();
}