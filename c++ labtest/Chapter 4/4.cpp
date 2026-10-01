#include <bits/stdc++.h>
using namespace std;

class Cordinate
{
    int x, y;
    public:
    Cordinate(int a, int b)
    {
        x = a;
        y = b;
    }
    void show()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
    friend void multiply(Cordinate *c);
};

void multiply(Cordinate *c)
{
    c->x *= 2;
    c->y *= 2;
}

int main()
{
    Cordinate c(2, 4);
    cout << "Before" << endl;
    c.show();

    multiply(&c);

    cout << "After" << endl;
    c.show();
    
    return 0;
}