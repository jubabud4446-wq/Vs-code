#include <bits/stdc++.h>
using namespace std;

class Box
{
    double a, b, c;
    public:
    Box(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }
    void get_volume()
    {
        double v = a * b * c;
        cout << "Volume = " << v << endl;
    }
};

int main()
{
    double a, b, c;
    cout << "Enter 3 lengths: ";
    cin >> a >> b >> c;
    Box o1(a,b,c);
    o1.get_volume();
    return 0;
}