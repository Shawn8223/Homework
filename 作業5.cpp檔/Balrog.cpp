#include<string>
#include"Balrog.h"
#include<iostream>
using namespace std;



Balrog::Balrog()
	:Demon(10, 10)
{
}
Balrog::Balrog(int newStr, int newHit)
	: Demon(newStr, newHit)
{
}

int Balrog::getDamage()
{
	int damage;
	damage = (rand() % getStrength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	if ((rand() % 100) < 5)
	{
		damage += 50;
		cout << "Demonic attack inflicts 50 " << " additional danage points!" << endl;
	}
	int damage2 = (rand() % getStrength()) + 1;
	cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
	damage = damage + damage2;
	return damage;
}

string Balrog::getSpecies()
{
	return "Balrog";
}
