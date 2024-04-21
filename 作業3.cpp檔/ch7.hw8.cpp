#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Vector to store the grades
    vector<int> grades;

    // Variable to store user input
    int grade;

    // Prompting the user to enter grades
    cout << "Enter grades (enter -1 to finish): ";

    while (true) {
        cin >> grade;
        // If the user enters -1, stop input
        if (grade == -1) {
            break;
        }
        // Add the grade to the vector
        grades.push_back(grade);
    }

    // Determine the maximum grade
    int max_grade = *max_element(grades.begin(), grades.end());

    // Create a histogram array (vector) initialized with 0s
    vector<int> histogram(max_grade + 1, 0);

    // Compute the histogram
    for (int g : grades) {
        histogram[g]++;
    }

    // Output the histogram to the console
    cout << "\nHistogram of grades:" << endl;
    for (int i = 0; i <= max_grade; i++) {
        cout << "Grade " << i << ": ";
        // Display the histogram using asterisks
        for (int j = 0; j < histogram[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
