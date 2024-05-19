#include <iostream>
#include <cstdlib>
#include <cctype>
#include <string>
using namespace std;

int main() {

	string sentence;
	char ans;
	int count = 0;

	do {

		//enter a sentence
		cout << "Enter a sentence and it will replace all four-letter words with'love' => \n";
		getline(cin, sentence);
		for (int i = 0; i < sentence.length(); i++)
		{

			//if ith of the sentence is an alpha, count+1
			if (isalpha(sentence[i])) {
				count++;
			}

			//if the ith of the sentence isn't an alpha, count is the size of the word.
			else {

				//if the size of the word is 4, replace the word with love.
				if (count == 4)
				{

					//if the letter is upper, replace the word by Love
					if (isupper(sentence[i - 4]))

						sentence[i - 4] = 'L';
					else
						sentence[i - 4] = 'l';

					sentence[i - 3] = 'o';
					sentence[i - 2] = 'v';
					sentence[i - 1] = 'e';
				}

				//remake the count to 0
				count = 0;
			}

		}

		//output the sentence
		cout << sentence << endl;

		//whether to continue input sentence
		cout << "Enter 'y' to continue or any key word to quit>";
		cin >> ans;

		//clear the sentence
		char clear;
		do {
			cin.get(clear);
		} while (clear != '\n');

	} while (ans == 'y' || ans == 'Y');
	system("pause");
	return 0;
}