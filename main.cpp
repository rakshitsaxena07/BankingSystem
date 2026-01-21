#include <iostream>
#include "BankAccount.h"
using namespace std;

int main() {
    BankAccount account("John", 1000);

    account.deposit(500);
    account.withdraw(300);

    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
