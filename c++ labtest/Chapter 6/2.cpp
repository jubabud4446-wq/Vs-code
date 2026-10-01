#include <bits/stdc++.h>
using namespace std;

class Vector2D
{
    int x, y;
    public:
    Vector2D(int a, int b)
    {
        x = a;
        y = b;
    }
    bool operator==(Vector2D &c)
    {
        if(x == c.x)
            return true;
        else
            return false;
    }
};

int main()
{
    Vector2D o1(4, 4), o2(4,4);
    if(o1==o2)
        cout << "True" << endl;
    else
        cout << "false" << endl;
    return 0;
}