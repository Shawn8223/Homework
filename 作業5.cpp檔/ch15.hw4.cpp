#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Creature {
private:
    int strength;
    int hitpoints;

public:
    Creature(int newStrength = 10, int newHit = 10)
        : strength(newStrength), hitpoints(newHit) {}

    virtual string getSpecies() const {
        return "Unknown";
    }

    virtual int getDamage() const {
        int damage = (rand() % strength) + 1;
        cout << getSpecies() << " attacks for " << damage << " points!" << endl;
        return damage;
    }

    void setStrength(int newStrength) {
        strength = newStrength;
    }

    void setHitpoints(int newHitpoints) {
        hitpoints = newHitpoints;
    }

    int getStrength() const {
        return strength;
    }

    int getHitpoints() const {
        return hitpoints;
    }

    void takeDamage(int damage) {
        hitpoints -= damage;
    }
};

class Human : public Creature {
public:
    Human(int strength = 10, int hitpoints = 10)
        : Creature(strength, hitpoints) {}

    string getSpecies() const override {
        return "Human";
    }
};

class Elf : public Creature {
public:
    Elf(int strength = 10, int hitpoints = 10)
        : Creature(strength, hitpoints) {}

    string getSpecies() const override {
        return "Elf";
    }

    int getDamage() const override {
        int damage = Creature::getDamage();
        if ((rand() % 10) == 0) {
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
            damage *= 2;
        }
        return damage;
    }
};

class Demon : public Creature {
public:
    Demon(int strength = 10, int hitpoints = 10)
        : Creature(strength, hitpoints) {}

    string getSpecies() const override {
        return "Demon";
    }

    int getDamage() const override {
        int damage = Creature::getDamage();
        if ((rand() % 100) < 5) {
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
            damage += 50;
        }
        return damage;
    }
};

class Cyberdemon : public Demon {
public:
    Cyberdemon(int strength = 10, int hitpoints = 10)
        : Demon(strength, hitpoints) {}

    string getSpecies() const override {
        return "Cyberdemon";
    }
};

class Balrog : public Demon {
public:
    Balrog(int strength = 10, int hitpoints = 10)
        : Demon(strength, hitpoints) {}

    string getSpecies() const override {
        return "Balrog";
    }

    int getDamage() const override {
        int damage = Demon::getDamage();
        int additionalDamage = (rand() % getStrength()) + 1;
        cout << "Balrog speed attack inflicts " << additionalDamage << " additional damage points!" << endl;
        damage += additionalDamage;
        return damage;
    }
};

void battleArena(Creature& creature1, Creature& creature2);

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generator

    Human h(20, 50);
    Elf e(25, 50);
    Cyberdemon c(30, 50);
    Balrog b(35, 50);

    cout << "\nBattle 1: Human vs. Elf\n";
    battleArena(h, e);

    cout << "\nBattle 2: Cyberdemon vs. Balrog\n";
    battleArena(c, b);

    cout << "\nBattle 3: Elf vs. Balrog\n";
    battleArena(e, b);

    return 0;
}

void battleArena(Creature& creature1, Creature& creature2) {
    while (creature1.getHitpoints() > 0 && creature2.getHitpoints() > 0) {
        int damage1 = creature1.getDamage();
        int damage2 = creature2.getDamage();

        creature2.takeDamage(damage1);
        creature1.takeDamage(damage2);

        cout << creature2.getSpecies() << " has " << creature2.getHitpoints() << " hit points left." << endl;
        cout << creature1.getSpecies() << " has " << creature1.getHitpoints() << " hit points left." << endl;

        if (creature1.getHitpoints() <= 0 && creature2.getHitpoints() <= 0) {
            cout << "The battle is a tie!" << endl;
            break;
        }
        else if (creature1.getHitpoints() <= 0) {
            cout << creature2.getSpecies() << " wins!" << endl;
            break;
        }
        else if (creature2.getHitpoints() <= 0) {
            cout << creature1.getSpecies() << " wins!" << endl;
            break;
        }
    }
}

