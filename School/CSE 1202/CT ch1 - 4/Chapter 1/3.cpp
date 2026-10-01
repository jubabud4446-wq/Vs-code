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
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c;
    cout << "Enter radius : ";
    double radius;
    cin >> radius;
    
    c.set_radius(radius);
    cout << "Area: " << c.get_area() << endl;
    
    return 0;
}