#include <iostream>
#include <string>

using namespace std;

class Pizza {
private:
    string type;
    string size;
    int numToppings;

public:
    // Constants for type and size
    static const string DEEP_DISH;
    static const string HAND_TOSSED;
    static const string PAN;

    static const string SMALL;
    static const string MEDIUM;
    static const string LARGE;

    // Constructor
    Pizza(string t, string s, int toppings) {
        type = t;
        size = s;
        numToppings = toppings;
    }

    // Accessor functions
    string getType() const {
        return type;
    }

    string getSize() const {
        return size;
    }
    
    int getNumToppings() const {
        return numToppings;
    }

    // Mutator functions
    void setType(string t) {
        type = t;
    }

    void setSize(string s) {
        size = s;
    }

    void setNumToppings(int toppings) {
        numToppings = toppings;
    }

    // Function to output textual description
    void outputDescription() const {
        cout << "Pizza Type: " << type << endl;
        cout << "Pizza Size: " << size << endl;
        cout << "Number of toppings: " << numToppings << endl;
    }

    // Function to compute price
    double computePrice() const {
        double basePrice = 0.0;
        if (size == SMALL) {
            basePrice = 10.0;
        }
        else if (size == MEDIUM) {
            basePrice = 14.0;
        }
        else if (size == LARGE) {
            basePrice = 17.0;
        }
        return basePrice + 2.0 * numToppings;
    }
};

// Definition of constants
const string Pizza::DEEP_DISH = "Deep Dish";
const string Pizza::HAND_TOSSED = "Hand Tossed";
const string Pizza::PAN = "Pan";
const string Pizza::SMALL = "Small";
const string Pizza::MEDIUM = "Medium";
const string Pizza::LARGE = "Large";

int main() {
    // Creating pizza objects and testing
    Pizza pizza1(Pizza::DEEP_DISH, Pizza::MEDIUM, 2);
    Pizza pizza2(Pizza::PAN, Pizza::LARGE, 3);

    // Outputting descriptions and prices
    cout << "Pizza 1 Description:" << endl;
    pizza1.outputDescription();
    cout << "Price: $" << pizza1.computePrice() << endl << endl;

    cout << "Pizza 2 Description:" << endl;
    pizza2.outputDescription();
    cout << "Price: $" << pizza2.computePrice() << endl;

    system("pause");
    return 0;
}
