#include <iostream>
using namespace std;

class Weight {
private:
    double weightPounds;  // Stores weight internally in pounds

public:
    // Default constructor
    Weight() : weightPounds(0.0) {}

    // Set weight in pounds
    void setWeightPounds(double pounds) {
        weightPounds = pounds;
    }

    // Set weight in kilograms and convert to pounds
    void setWeightKilograms(double kilograms) {
        weightPounds = kilograms * 2.21;
    }

    // Set weight in ounces and convert to pounds
    void setWeightOunces(double ounces) {
        weightPounds = ounces / 16.0;
    }

    // Return weight in pounds
    double getWeightPounds() const {
        return weightPounds;
    }

    // Return weight in kilograms
    double getWeightKilograms() const {
        return weightPounds / 2.21;
    }

    // Return weight in ounces
    double getWeightOunces() const {
        return weightPounds * 16.0;
    }
};

int main() {
    // Create a Weight object
    Weight weight;

    // Test setting weight in pounds
    weight.setWeightPounds(10.0);
    cout << "Weight in pounds: " << weight.getWeightPounds() << endl;
    cout << "Weight in kilograms: " << weight.getWeightKilograms() << endl;
    cout << "Weight in ounces: " << weight.getWeightOunces() << endl;

    // Test setting weight in kilograms
    weight.setWeightKilograms(5.0);
    cout << "\nWeight in pounds: " << weight.getWeightPounds() << endl;
    cout << "Weight in kilograms: " << weight.getWeightKilograms() << endl;
    cout << "Weight in ounces: " << weight.getWeightOunces() << endl;

    // Test setting weight in ounces
    weight.setWeightOunces(32.0);
    cout << "\nWeight in pounds: " << weight.getWeightPounds() << endl;
    cout << "Weight in kilograms: " << weight.getWeightKilograms() << endl;
    cout << "Weight in ounces: " << weight.getWeightOunces() << endl;

    system("pause");
    return 0;
}
