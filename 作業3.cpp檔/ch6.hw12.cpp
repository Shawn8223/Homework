#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class BoxOfProduce {
private:
    string items[3]; 

public:
    
    BoxOfProduce(string produceList[], int listSize) {
        // Initialize random seed
        srand(time(nullptr));

        // Randomly select three items from the produce list
        for (int i = 0; i < 3; i++) {
            int randomIndex = rand() % listSize;
            items[i] = produceList[randomIndex];
        }
    }

    // Get item at the specified index
    string getItem(int index) const {
        return items[index];
    }

    // Set item at the specified index
    void setItem(int index, const string& item) {
        if (index >= 0 && index < 3) {
            items[index] = item;
        }
        else {
            cout << "Invalid index!" << endl;
        }
    }

    // Display the complete contents of the box
    void displayBoxContents() const {
        cout << "Contents of the box:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "- " << items[i] << endl;
        }
    }
};

int main() {
    
    const int listSize = 5;
    string produceList[listSize];

    // Read the list of available produce from a text file
    ifstream inputFile("produce_list.txt");
    if (!inputFile) {
        cerr << "Failed to open the produce list file!" << endl;
        return 1;
    }

    
    for (int i = 0; i < listSize && getline(inputFile, produceList[i]); i++);

    inputFile.close();

    // Create a BoxOfProduce object and initialize it with three random items
    BoxOfProduce box(produceList, listSize);

    // Display the initial contents of the box
    cout << "Initial  ";
    box.displayBoxContents();

    // Allow the user to make substitutions
    char choice;
    do {
        cout << "\nWould you like to substitute any item? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int index;
            cout << "Enter the index (1-3) of the item you want to substitute: ";
            cin >> index;

            if (index < 1 || index > 3) {
                cout << "Invalid index. Please enter a number between 1 and 3." << endl;
                continue;
            }

            // Convert to zero-based index
            index--;

            // Display available produce for substitution
            cout << "Available produce for substitution:" << endl;
            for (int i = 0; i < listSize; i++) {
                cout << i + 1 << ". " << produceList[i] << endl;
            }

            int produceIndex;
            cout << "Enter the index of the produce you want to substitute with: ";
            cin >> produceIndex;

            if (produceIndex < 1 || produceIndex > listSize) {
                cout << "Invalid index. Please enter a valid index." << endl;
                continue;
            }

            // Set the new item in the box
            box.setItem(index, produceList[produceIndex - 1]);

            // Display the updated contents of the box        
            box.displayBoxContents();
        }

    } while (choice == 'y' || choice == 'Y');

    // Display the final contents of the box
    box.displayBoxContents();

    system("pause");
    return 0;
}
