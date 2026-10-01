#include <bits/stdc++.h>
using namespace std;

class Value
{
    double val;
    public:
    void set(double x)
    {
        val = x;
    }
    void display()
    {
        cout << val << endl;
    }
    void swap_values(Value &v)
    {
        double temp = val;
        val = v.val;
        v.val = temp;
    }
};

int main()
{
    Value a, b;

    a.set(10.1212);
    b.set(12.1);

    a.swap_values(b);

    a.display();
    b.display();

    return 0;
}