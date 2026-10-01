#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;
    public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point()
    {
        x = 0;
        y = 0;
    }
    void show()
    {
        cout << "(x, y) = " << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point o1(1, 3), o2;

    o1.show();
    o2.show();
    
    return 0;
}