#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum: " << findMax(num1, num2) << endl;
    return 0;
}
