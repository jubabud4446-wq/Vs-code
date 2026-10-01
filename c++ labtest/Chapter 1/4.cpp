#include <bits/stdc++.h>
using namespace std;

class Temprature
{
    double celsius;
    public:
    void set(double c)
    {
        celsius = c;
    }
    double get_f()
    {
        return (9/5 * celsius) + 32;
    }
};

int main()
{
    Temprature o1;

    cout << "Enter Celsius: ";
    double t;
    cin >> t;
    o1.set(t);

    cout << t << "c = " << o1.get_f() << "f" << endl;
    return 0;
}