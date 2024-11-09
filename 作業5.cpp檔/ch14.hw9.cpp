
#include<iostream>
#include<string>
#include"Human.h"
#include"Elf.h"
#include"Cyberdemon.h"
#include"Balrog.h"
using namespace std;

int main() {

	int strength, hit;
	cout << "Enter the strength>";
	cin >> strength;
	cout << "Enter the hitpoints>";
	cin >> hit;

	Human role(strength, hit);
	role.getDamage();
	cout << endl;


	Cyberdemon role1(strength, hit);
	role1.getDamage();
	cout << endl;

	Balrog role2(strength, hit);
	role2.getDamage();
	cout << endl;


	Elf role3(strength, hit);
	role3.getDamage();
	cout << endl;

	system("pause");
	return 0;
}