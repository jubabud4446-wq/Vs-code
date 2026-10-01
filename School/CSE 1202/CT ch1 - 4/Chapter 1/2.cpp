#include <bits/stdc++.h>
using namespace std;

class Bank_Account
{
    double balance = 0;
public:
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }
    void display_balance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    Bank_Account account;
    account.deposit(1000);
    account.withdraw(500);
    account.display_balance();
    return 0;
}