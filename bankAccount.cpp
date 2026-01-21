#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount(string ownerName, double initialBalance) {
    owner = ownerName;
    balance = initialBalance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

void BankAccount::withdraw(double amount) {
    if (amount <= 0) {
        cout << "Invalid withdrawal amount" << endl;
        return;
    }
    if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        balance -= amount;
    }
}

double BankAccount::getBalance() const {
    return balance;
}
