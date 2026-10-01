#include <iostream>
using namespace std;

class Point2D
{
private:
    double x;
    double y;

public:
    // Parameterized constructor
    Point2D(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    // Binary + operator
    Point2D operator+(const Point2D& p)
    {
        return Point2D(x + p.x, y + p.y);
    }

    // Friend stream insertion operator
    friend ostream& operator<<(ostream& out, const Point2D& p)
    {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main()
{
    Point2D p1(2.5, 3.5);
    Point2D p2(1.5, 2.5);

    Point2D p3 = p1 + p2;

    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p1 + p2 = " << p3 << endl;

    return 0;
}