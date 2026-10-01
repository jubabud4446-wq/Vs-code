#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
        private:
    double length, width;

        public:
    void set_info(double l, double w)
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
    Rectangle o1;
    double l, w, area;

    cout << "Give length: ";
    cin >> l;

    cout << "Give Width: ";
    cin >> w;

    o1.set_info(l,w);
    area = o1.area();

    cout << "The area of the Rectangle is: " << area << endl;

    return 0;
}