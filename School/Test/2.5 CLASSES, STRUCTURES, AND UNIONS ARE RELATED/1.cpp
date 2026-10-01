#include <bits/stdc++.h>
using namespace std;

struct st_type
{
    st_type(double b, const string &n);
    void show();
    private:
        double balance;
        string name;
};

st_type::st_type(double b, const string &n)
{
    balance = b;
    name = n;
}

void st_type::show()
{
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

int main()
{
    st_type ob1(1000.0, "John Doe");
    st_type ob2(2000.0, "Jane Smith");

    ob1.show();
    ob2.show();

    return 0;
}


// Page 52; Example 1