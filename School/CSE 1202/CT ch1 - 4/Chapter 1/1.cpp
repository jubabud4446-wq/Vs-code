#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    double length, width;
public:
    void set_values(double l, double w)
    {
        length = l;
        width = w;
    }
    double area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;
    double length, width;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    r.set_values(length, width);
    cout << "Area: " << r.area() << endl;

    return 0;
}