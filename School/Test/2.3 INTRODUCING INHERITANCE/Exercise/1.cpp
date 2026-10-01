#include <bits/stdc++.h>
using namespace std;

class area_cl
{
    public:
        double area;
        double hight;
        double width;
        void get_area();
};

class rectangle : public area_cl
{
    public:
        void get_area()
        {
            area = hight * width;
            cout << "Area of rectangle is: " << area << endl;
        }
};

class isosceles_triangle : public area_cl
{
    public:
        void get_area()
        {
            area = (hight * width) / 2;
            cout << "Area of isosceles triangle is: " << area << endl;
        }
};

// From Skills Check; Page 61; Exercise 4
class cylinder : public area_cl
{
    public:
        double radius;
        void get_area()
        {
            area = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * hight;
            cout << "Surface area of cylinder is: " << area << endl;  
        }
};

int main()
{
    int choice;
    cout << "Enter 0 for rectangle, 1 for isosceles triangle, 2 for cylinder: ";
    cin >> choice;
    
    if (choice == 0)
    {
        rectangle r;
        cout << "Enter hight and width of rectangle: ";
        cin >> r.hight >> r.width;
        r.get_area();
    }
    else if (choice == 1)
    {
        isosceles_triangle t;
        cout << "Enter hight and width of isosceles triangle: ";
        cin >> t.hight >> t.width;
        t.get_area();
    }
    else if (choice == 2)
    {
        cylinder c;
        cout << "Enter radius and hight of cylinder: ";
        cin >> c.radius >> c.hight;
        c.get_area();
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}