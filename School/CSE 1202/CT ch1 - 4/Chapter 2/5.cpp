#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;
    public:
    Point()
    {
        x = 0; y = 0;
    }
    Point(int a, int b)
    {
        x = a; y = b;
    }
    void display()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point ob1, ob2(1,2), ob3(4,-2);
    ob1.display();
    ob2.display();
    ob3.display();
    return 0;
}