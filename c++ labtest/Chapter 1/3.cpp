#include <bits/stdc++.h>
using namespace std;

class Circle
{
    double radius;

    public:
    void set_radius(double r)
    {
        radius = r;
    }

    double get_area()
    {
        return 3.14 * pow(radius, 2);
    }
};

int main()
{
    cout << "Enter radius: ";
    Circle o1;
    double r;
    cin >> r;
    o1.set_radius(r);

    cout << "Area: " << o1.get_area() << endl;
    return 0;
}