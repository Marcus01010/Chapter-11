#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float bal);
    void displayBalance();
};

BankAccount::BankAccount(float bal) {
    balance = bal;
}

void BankAccount::displayBalance() {
    cout << balance << endl;
}

int main() {
    BankAccount account1(500);
    BankAccount account2(1000);
    BankAccount account3(1500);

    cout << "Account A Balance: ";
    account1.displayBalance();

    cout << "Account B Balance: ";
    account2.displayBalance();

    cout << "Account C Balance: ";
    account3.displayBalance();

    return 0;
}
