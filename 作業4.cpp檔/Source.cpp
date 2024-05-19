#include <iostream>
#include <cstdlib>
#include "Administrator.h"
#include "User.h"
using namespace std;

int main() {
	string username, password;
	char choose;
	Administrator admin;
	User user;

	//let user choose which one to input
	cout << "Choose A administrator or B user or any other key to exit => ";
	cin >> choose;
	while (choose == 'A' || choose == 'B') {

		//input the username and password
		cout << "Enter the username => ";
		cin >> username;
		cout << "Enter the password => ";
		cin >> password;

		//if user choose administrator
		if (choose == 'A') {

			//check whether user input is right
			if (admin.Login(username, password))
				cout << "Input correct.\n";
			else
				cout << "Your username or password is incorrect.\n";
		}

		//if user choose user
		else {

			//check whether user input is right
			if (user.Login(username, password))
				cout << "Input correct.\n";
			else
				cout << "Your username or password is incorrect.\n";
		}

		cout << "Choose A administrator or B user or any other key to exit => ";
		cin >> choose;
	}
	system("pause");
	return 0;
}