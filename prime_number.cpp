#include <iostream>
using namespace std;

int main() {
    int number, isPrime = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    } else {
        for (int i = 2; i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0; // Not a prime number
                break;       // Exit the loop early
            }
        }

        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}