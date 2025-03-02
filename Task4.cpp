#include <iostream>
using namespace std;

class Account {
public:
    int accountNumber;
    int balance;

    Account(int accNum, int initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << "\n";
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient funds!\n";
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << "\n";
    }

    void showBalance() {
        cout << "Account Number: " << accountNumber << "\nBalance: " << balance << "\n";
    }
};

class Customer {
public:
    string name;
    Account account;

    Customer(string n, int accNum, int initialBalance) : account(accNum, initialBalance) {
        name = n;
    }

    void showDetails() {
        cout << "Customer: " << name << "\n";
        account.showBalance();
    }
};

int main() {
    Customer customer("John Doe", 12345, 5000);
    customer.showDetails();
    customer.account.deposit(2000);
    customer.account.withdraw(1000);
    customer.showDetails();
    return 0;
}

