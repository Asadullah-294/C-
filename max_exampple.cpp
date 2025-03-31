#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Input three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Find the maximum
    int max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Display the result
    cout << "The maximum number is: " << max << endl;

    return 0;
}
