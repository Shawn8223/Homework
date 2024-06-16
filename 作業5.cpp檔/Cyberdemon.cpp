#include<iostream>
#include<string>
#include"Cyberdemon.h"
using namespace std;


Cyberdemon::Cyberdemon()
	:Demon(10, 10)
{
}

Cyberdemon::Cyberdemon(int newStrength, int newHit)
	:Demon(newStrength, newHit)
{
}

int Cyberdemon::getDamage()
{
	int damage;
	damage = (rand() % getStrength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!" << endl;
	if ((rand() % 100) < 5)
	{
		damage += 50;
		cout << "Demonic attack inflicts 50 " << " additional danage points!" << endl;
	}
	return damage;
}

string Cyberdemon::getSpecies()
{
	return "Cyberdemon";
}

