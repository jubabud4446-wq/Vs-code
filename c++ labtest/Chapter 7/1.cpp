#include <bits/stdc++.h>
using namespace std;

class Shape
{
    protected:
    double width, height;
    public:
    void set_val(double w, double h)
    {
        width = w;
        height = h;
    }
};

class Triangle : public Shape
{
    public:
    double area()
    {
        return 0.5 * width * height;
    }
};

int main()
{
    Triangle t;
    t.set_val(5,2);
    cout << "Area = " << t.area() << endl;
    return 0;
}