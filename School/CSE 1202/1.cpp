#include <bits/stdc++.h>
using namespace std;

class cord
{
    int x, y;
    public:
    cord()
    {
        x = 0;
        y = 0;
    }
    cord(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
    cord operator+(cord obj)
    {
        cord temp;
        temp.x = x + obj.x;
        temp.y = y + obj.y;
        return temp;
    }
    cord operator-(cord obj)
    {
        cord temp;
        temp.x = x - obj.x;
        temp.y = y - obj.y;
        return temp;
    }
    cord operator=(cord obj)
    {
        x = obj.x;
        y = obj.y;
        return *this;
    }
};

int main()
{
    cord c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    c3 = c1;
    c3.display();
    return 0;
}