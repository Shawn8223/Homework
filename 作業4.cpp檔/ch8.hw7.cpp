#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

class PrimeNumber {
public:

    //constructor of the class
    PrimeNumber() :prime(1) {};

    //constructor of the class
    PrimeNumber(int prime) :prime(prime) {};

    //setter of prime
    void setPrime(int prime) { this->prime = prime; };

    //getter of prime
    int getPrime() { return prime; };
    PrimeNumber operator ++();
    PrimeNumber operator --();
    bool isPrime(int num);
private:
    int prime;
};

//operator of ++
PrimeNumber PrimeNumber::operator ++() {
    int next = prime;

    //find the largest prime number
    do {
        next++;

        //if next is the prime, return next
    } while (!isPrime(next));
    return next;

}

//operator of --
PrimeNumber PrimeNumber::operator --() {
    int next = prime;
    do {
        next--;

        //if next is the prime, return next.
        //if next=0, the prime number is the smallest prime.
    } while (!isPrime(next) && next >= 0);
    if (next == 0)
        cout << "This prime numeber is the smallest one.\n";
    return next;

}

//determine whether the number is prime
bool PrimeNumber::isPrime(int num) {
    bool isprime = true;
    for (int i = 2; i <= sqrt(num); i++) {

        //when the number is divisible by a number from 2~sqrt(num), this number isn't a prime.
        if (num % i == 0) {
            isprime = false;
            break;
        }
    }
    return  isprime;
}

int main() {
    PrimeNumber primenumber;
    int prime;

    cout << "Enter a prime number => ";
    cin >> prime;
    primenumber.setPrime(prime);

    //output the next largest prime number
    PrimeNumber large = ++primenumber;
    cout << "The next largest prime number is: " << large.getPrime() << endl;

    //output the next smallest prime number
    PrimeNumber small = --primenumber;
    if (small.getPrime() != 0)
        cout << "The next smallest prime number is: " << small.getPrime() << endl;

    system("pause");
    return 0;
}
