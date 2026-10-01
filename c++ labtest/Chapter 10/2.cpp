#include <bits/stdc++.h>
using namespace std;

class Currency
{
    public:
    virtual double get_val()
    {
        return 0.0;
    }
};

class Dollar : public Currency
{
    public:
    double get_val()
    {
        return 1.0;
    }
};

class Euro : public Currency
{
    public:
    double get_val()
    {
        return 0.9;
    }
};

int main()
{
    Currency *prt;

    Dollar d;
    Euro e;

    prt = &d;
    cout << prt->get_val() << endl;

    prt = &e;
    cout << prt->get_val() << endl;
    
    return 0;
}