#include <iostream>
using namespace std;

int main() {
    int number, largestDigit = 0, digit;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive number greater than zero." << endl;
    } else {
        while (number != 0) {
            digit = number % 10;        // Extract the last digit
            if (digit > largestDigit) {
                largestDigit = digit;  // Update the largest digit
            }
            number /= 10;              // Remove the last digit
        }

        cout << "The largest digit is: " << largestDigit << endl;
    }

    return 0;
}