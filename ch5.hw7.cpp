#include <iostream>
using namespace std;

int main(void) 
{
    const int num_Student = 6;
    int grade = 0;
    int gradeCount[num_Student] = { 0 };

    cout << "Enter grades for each student.(scores range from 0 to 5)\n";
    cout << "Enter '-1' to stop input.\n";

    do
    {
        cin >> grade;

        if (grade >= 0 && grade <= 5)
        {
            gradeCount[grade]++;
        }
        else
        {
            cout << "Wrong grades input." << endl;
        }
    } while (grade != -1);   // Continue loop until user enters -1 to stop input
    
    // Display the count of each grade
    for (int i = 0; i < num_Student; i++)
    {
        cout << gradeCount[i] << " grade(s) of " << i << endl;
    }

    return 0;
}
