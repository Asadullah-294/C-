#include <iostream>
using namespace std;

double areaOfCircle(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    return 0;
}
