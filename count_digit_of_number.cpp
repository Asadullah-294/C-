#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter a positive number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive number greater than zero." << endl;
    } else {
        while (number != 0) {
            number /= 10; // Remove the last digit
            count++;      // Increment the digit count
        }

        cout << "The number of digits is: " << count << endl;
    }

    return 0;
}