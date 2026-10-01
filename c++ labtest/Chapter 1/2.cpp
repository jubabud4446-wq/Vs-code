#include <bits/stdc++.h>
using namespace std;

class Bank_account
{
    double balance;
    
    public:
    Bank_account(double balance)
    {
        this->balance = balance;
    }

    void deposit(double d)
    {
        balance += d;
    }

    void withdraw(double w)
    {
        balance -= w;
    }

    void display_balance()
    {
        cout << "Your current Balance: " << balance << endl;
    }
};

int main()
{
    Bank_account Jubaer(10000.00);
    
    double d;
    cout << "Deposit money: ";
    cin >> d;
    Jubaer.deposit(d);
    Jubaer.display_balance();

    double w;
    cout << "Withdraw ammount: ";
    cin >> w;
    Jubaer.withdraw(w);
    Jubaer.display_balance();

    return 0;
}