#include <bits/stdc++.h>
using namespace std;

class Account
{
    protected:
    double balance;
    public:
    void set_balance(double b)
    {
        balance = b;
    }
    void show_info()
    {
        cout << "Balance: " << balance << endl;
    }
};

class Savings:public Account
{
    public:
    void add_intrest(double i)
    {
        balance += i;
    }
};

class Checking:public Account
{
    public:
    void deduct_fee(double f)
    {
        balance -= f;
    }
};

int main()
{
    Savings s;
    Checking c;
    
    s.set_balance(10000);
    s.add_intrest(100);
    s.show_info();

    c.set_balance(10000);
    c.deduct_fee(1000);
    c.show_info();

    return 0;
}