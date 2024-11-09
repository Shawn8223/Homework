#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include<iostream>
#include<string>
#include"Demon.h"
using namespace std;

class Cyberdemon :public Demon {
public:
	Cyberdemon();
	Cyberdemon(int newStrength, int newHit);
	int getDamage();
private:
	string getSpecies();
};

#endif