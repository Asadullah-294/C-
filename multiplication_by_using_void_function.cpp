#include <iostream>
using namespace std;
//Void function
void multiplication(int a,int b=10) {
	for (int i=1;i<=b;i++) {//function use loop
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
}
//Main Function
int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	// Recall Function
	multiplication(a);
	return 0;
}
