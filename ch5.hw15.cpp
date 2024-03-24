#include <iostream>
#include <ctime>
using namespace std;

// Function to generate a random number between 1 and 3
int random()
{
	return rand() % 3 + 1;
}

int main(void)
{
	//Avoid the random number always be the same
	srand(time(NULL));

	const int actualPIN = 12573;
	int random_num[10];

	for (int i = 0; i < 10; i++)
	{
		random_num[i] = random();
	}

	cout << "PIN:0 1 2 3 4 5 6 7 8 9\n";
	cout << "NUM:";
	for (int i = 0; i < 10; i++)
	{
		cout << random_num[i] << " ";
	}

	int response;
	cout << "\nEnter the response.\n";
	cin >> response;

	if (response == actualPIN)
	{
		cout << "Response correctly!" << endl;
	}
	else
	{
		cout << "Response incorrect" << endl;

	}
	return 0;
}
