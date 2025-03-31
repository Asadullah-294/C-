#include <iostream>
using namespace std;

void checkBalance(int balance);
void depositMoney(int balance);
void withdrawMoney(int balance);

int main() {
    int balance = 0;
    int pin;

    bool accountCreated = false;
    int attempts = 3;

    cout << "Welcome to MAU Bank\n";

    int option;
    cout << "1. Open a New Account\n2. Login to Existing Account\n";
    cout << "Enter your choice: ";
    cin >> option;

    if (option == 1) {
        cout << "Enter an initial deposit amount (PKR): ";
        cin >> balance;
        while (balance <= 0) {
            cout << "Invalid amount. Enter a positive value: ";
            cin >> balance;
        }
        cout << "Set a 4-digit PIN for your account: ";
        cin >> pin;
        while (pin < 1000 || pin > 9999) {
            cout << "Invalid PIN. Please enter a 4-digit PIN: ";
            cin >> pin;
        }
        accountCreated = true;
        cout << "Account created successfully!\n";
    } else if (option == 2) {
        if (!accountCreated) {
            cout << "No account exists. Please create an account first.\n";
            return 0;
        }

        int enteredPin;
        while (attempts > 0) {
            cout << "Enter your PIN: ";
            cin >> enteredPin;
            if (enteredPin == pin) {
                cout << "Login successful!\n";
                break;
            } else {
                attempts--;
                cout << "Incorrect PIN. Attempts remaining: " << attempts << endl;
            }
        }
        if (attempts == 0) {
            cout << "Too many incorrect attempts. Exiting...\n";
            return 0;
        }
    } else {
        cout << "Invalid choice. Exiting...\n";
        return 0;
    }

    int choice;
    do {
        cout << "\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
    cout << "Your current balance is: PKR " << balance << endl;
                break;
            case 2:
                depositMoney(balance);
                break;
            case 3:
                withdrawMoney(balance);
                break;
            case 4:
                cout << "Thank you for using our banking system!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}


void depositMoney(int balance) {
    int amount;
    cout << "Enter amount to deposit: PKR ";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful. New balance: PKR " << balance << endl;
    } else {
        cout << "Invalid amount! Deposit failed.\n";
    }
}

void withdrawMoney(int balance) {
    int amount;
    cout << "Enter amount to withdraw: PKR ";
    cin >> amount;

    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful. New balance: PKR " << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance! Withdrawal failed.\n";
    } else {
        cout << "Invalid amount! Withdrawal failed.\n";
    }
}
