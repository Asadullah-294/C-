#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square: " << square(num) << endl;
    return 0;
}
