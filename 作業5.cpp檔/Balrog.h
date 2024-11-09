#ifndef BALROG_H
#define BALROG_H

#include<iostream>
#include<string>
#include"Demon.h"
using namespace std;

class Balrog :public Demon {
public:
	Balrog();
	Balrog(int newStrength, int newHit);
	int getDamage();
private:
	string getSpecies();
};

#endif