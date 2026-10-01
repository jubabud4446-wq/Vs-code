#include <bits/stdc++.h>
using namespace std;

class Coordinate
{
    int x, y;
    public:
    void output()
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
    void set(int a, int b)
    {
        x = a;
        y = b;
    }
    friend void modify(Coordinate *c);
};

void modify(Coordinate *c)
{
    c->x = 0;
    c->y = 0;
}

int main()
{
    Coordinate c;
    c.set(3, 4);

    modify(&c);

    c.output();

    return 0;
}