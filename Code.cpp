Swing aplet
Html css
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// Declare a structure to store account information
struct BankAccount {
    string name;
    long long accNumber;
    char type[10];
    long long balance = 0;
};

// Function to set account details
void setAccountDetails(BankAccount &account) {
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, account.name);

    cout << "Enter Account number: ";
    cin >> account.accNumber;

    cout << "Enter Account type: ";
    cin >> account.type;

    cout << "Enter Initial Balance: ";
    cin >> account.balance;
}

// Function to display account details
void showAccountDetails(const BankAccount &account) {
    cout << "Name: " << account.name << endl;
    cout << "Account No: " << account.accNumber << endl;
    cout << "Account type: " << account.type << endl;
    cout << "Balance: " << account.balance << endl;
}

// Function to deposit money
void deposit(BankAccount &account) {
    long long amount;
    cout << "Enter amount to be deposited: ";
    cin >> amount;
    account.balance += amount;
}

// Function to display balance
void showBalance(const BankAccount &account) {
    cout << "Total balance is: " << account.balance << endl;
}

// Function to withdraw money
void withdraw(BankAccount &account) {
    long long amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= account.balance) {
        account.balance -= amount;
        cout << "Available Balance is: " << account.balance << endl;
    } else {
        cout << "Insufficient funds!" << endl;
    }
}

int main() {
    BankAccount userAccount;

    while (true) {
        cout << "\n~~~~~~~~~~~~~ WELCOME ~~~~~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "1. Enter name, Account number, Account type\n";
        cout << "2. Balance Enquiry\n";
        cout << "3. Deposit Money\n";
        cout << "4. Show Total balance\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                setAccountDetails(userAccount);
                break;
            case 2:
                showAccountDetails(userAccount);
                break;
            case 3:
                deposit(userAccount);
                break;
            case 4:
                showBalance(userAccount);
                break;
            case 5:
                withdraw(userAccount);
                break;
            case 6:
                exit(1);
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}