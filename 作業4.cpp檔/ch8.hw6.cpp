#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
 
class MyInteger {
public:

    //constructor of the class
    MyInteger() :integer(0) {};

    //constructor of the class
    MyInteger(int integer) :integer(integer) {};

    //setter of integer
    void setInteger(int integer) { this->integer = integer; };

    //getter of integer
    int getInteger() { return integer; };
    int operator [](int index);
private:
    int integer;

};

//operater of []
int MyInteger::operator[](int index) {
    int size = 0;
    int replace = integer;

    //calculate the size of the integer
    do {
        replace = replace / 10;
        size++;
    } while (replace != 0);

    //if index more than the size of the integer, return -1
    if (index >= size)
    {
        cout << "It is not in range!\n";
        return -1;
    }
    int target = 0;

    //let the index of the digit you want to find be the largest one
    int left = pow(10, index + 1);
    target = integer % left;

    //find the digit of the index
    int right = pow(10, index);
    target = target / right;

    return target;
}

int main() {
    MyInteger integer;
    int num, index;

    cout << "Enter an integer => ";
    cin >> num;
    integer.setInteger(num);

    cout << "Enter the index of the digit => ";
    cin >> index;

    //if index of the integer is -1, the index is more than the size of index
    if (integer[index] != -1)
        cout << "The digit of the index is " << integer[index] << endl;

    system("pause");
    return 0;
}
