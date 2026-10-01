#include <bits/stdc++.h>
using namespace std;

class Base
{
    int x;
    public:
    void set_x(int x)
    {
        this->x = x;
    }
    void get_x()
    {
        cout << "X = " << x << endl;
    }
};

class Derived : public Base
{
    int y;
    public:
    void set_y(int y)
    {
        this->y = y;
    }
    void get_y()
    {
        cout << "Y = " << y << endl;
    }
};

int main()
{
    Derived *p;

    Base b_obj;
    Derived d_obj;

    p = &d_obj;
    p->set_x(10);
    p->set_y(20);

    p->get_x();
    p->get_y();

    return 0;
}