#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;

public:
    BankAccount(string ownerName, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
};

#endif
