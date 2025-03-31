#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0, remainder, originalNumber;

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    cout << "Original number: " << originalNumber << endl;
    cout << "Reversed number: " << reversedNumber << endl;

    return 0;
}