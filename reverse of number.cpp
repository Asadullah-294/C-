#include <iostream>
using namespace std;

int main() {
    int number, reverse = 0, remainder, original;

    cout << "Enter a number: ";
    cin >> number;

    original = number; // Store the original number

    // Reverse the number using a while loop
    while (number != 0) {
        remainder = number % 10;            // Get the last digit
        reverse = reverse * 10 + remainder; // Build the reversed number
        number /= 10;                       // Remove the last digit
    }

    // Print the original and reversed numbers
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reverse << endl;

    return 0;
}