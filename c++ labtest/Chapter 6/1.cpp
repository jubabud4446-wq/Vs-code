#include <bits/stdc++.h>
using namespace std;

class Complex
{
    double real, imag;
    public:
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        return Complex(real+c.real, imag+c.imag);
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex o1(1, 3), o2(1, -1);

    Complex o3 = o1+o2;

    o3.display();

    return 0;
}