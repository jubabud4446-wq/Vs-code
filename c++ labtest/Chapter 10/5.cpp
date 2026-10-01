#include <bits/stdc++.h>
using namespace std;

class Polygon
{
    protected:
    double length, width;

    public:
    void set_val(double l, double w)
    {
        length = l;
        width = w;
    }
    virtual double area()
    {
        return 0.0;
    }
};

class Rectangle : public Polygon
{
    public:
    double area()
    {
        return length * width;
    }
};

int main()
{
    Polygon *ptr;
    Rectangle o1;

    ptr = &o1;
    ptr->set_val(4,3);

    cout << "Area = " << ptr->area() << endl;

    Rectangle o2;
    o2.set_val(2,5);
    cout << "Area = " << o2.area() << endl;

    return 0;
}