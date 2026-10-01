#include <bits/stdc++.h>
using namespace std;

class ShapeArea
{
    public:
    double calculate_area(double l)
    {
        return l*l;
    }
    double calculate_area(double l, double b)
    {
        return l*b;
    }
};

int main()
{
    ShapeArea o1;

    cout << "Squire: " << o1.calculate_area(4.00) << endl;
    cout << "Rectangle: " << o1.calculate_area(4.00, 2.00) << endl;

    return 0;
}