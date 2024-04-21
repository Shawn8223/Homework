#include <iostream>
using namespace std;

class money {
private:
    int dollars; // Member variable to store the dollar part of the monetary amount
    int cents; // Member variable to store the cent part of the monetary amount

public:
    money() {} // Default constructor (currently empty)

    // Method to calculate the monetary amount based on dollars and cents
    double monetary_amount(int, int);

    // Setters to set dollars and cents
    void setDollars(int newDollars) { dollars = newDollars; }
    void setCents(int newCents) { cents = newCents; }

    // Getters to retrieve dollars and cents
    int getDollars() { return dollars; }
    int getCents() { return cents; }
};

int main(void)
{
    money money1, money2;

    double m1, m2;

    // Calculate the monetary amount for 50 dollars and 21 cents
    m1 = money1.monetary_amount(50, 21);
    cout << "Your monetary amount is $" << m1 << endl;

    // Calculate the monetary amount for 299 dollars and 67 cents
    m2 = money1.monetary_amount(299, 67);
    cout << "Your monetary amount is $" << m2 << endl;

    // Set new dollar and cent values for money1
    money1.setDollars(30);
    money1.setCents(89);

    // Output the new monetary amount in the format dollars.cents
    cout << "Your new monetary amount is $" << money1.getDollars() << "." << money1.getCents() << endl;

    // Pause the system (works on Windows systems)
    system("pause");
    return 0;
}

// Method to calculate the monetary amount based on dollars and cents
double money::monetary_amount(int dollars, int cents)
{
    // Return the monetary amount as a double (dollars plus cents as a fraction of 100)
    return (dollars + (cents / 100.0));
}
