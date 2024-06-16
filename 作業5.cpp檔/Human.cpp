#include<iostream>
#include<string>
#include"Human.h"
using namespace std;

Human::Human()
	:Creature(10, 10)
{

}

Human::Human(int newStrength, int newHit)
	:Creature(newStrength, newHit)
{
}

int Human::getDamage()
{
	int damage;
	damage = (rand() % getStrength()) + 1;
	cout << getSpecies() << " attacks for " << damage << " points!\n";
	return damage;
}

string Human::getSpecies()
{
	return "Human";
}
