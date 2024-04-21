//Converts from 24-hour notation to 12-hour notation.

#include <iostream>
using namespace std;

// Function to take input
void getInput(int& hour, int& minute) {

    do
    {
        cout << "Enter the time in 24-hour notation (HH:MM): ";
        cin >> hour >> minute;
        if (hour < 0 || hour>24 || minute < 0 || minute>60)
        {
            cout << "Wrong input time.\n";
        }
    } while (hour < 0 || hour>24 || minute < 0 || minute>60);

}

// Function to convert 24-hour notation to 12-hour notation
void convertTime(int& hour, int& minute, char& period) {
    if (hour >= 12) {
        period = 'P';
        if (hour > 12 ) {
            hour -= 12;
        }
    }
    else {
        period = 'A';
        if (hour == 0) {
            hour = 12;
        }
    }
}

// Function to output the converted time
void outputTime(int hour, int minute, char period) {
    cout << "Converted time: " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << period << ".M." << endl;
}

int main() {
    char choice;
    do {
        int hour, minute;
        char period;
        

        getInput(hour, minute);
        convertTime(hour, minute, period);
        outputTime(hour, minute, period);

        cout << "Do you want to convert another time? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
