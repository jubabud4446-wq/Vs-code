#include <bits/stdc++.h>
using namespace std;

class base
{
    int x;
    public:
        void setx(int n)
        {
            x = n;
        }
        int getx()
        {
            return x;
        }
};


class derived : public base
{
    int y;
    public:
        void sety(int n)
        {
            y = n;
        }
        int gety()
        {
            return y;
        }
};

int main()
{
    derived* p;
    derived ob_d;
    base ob_b;

    p = &ob_d;
    p->setx(10);
    p->sety(20);

    cout << "The value of x is: " << p->getx() << endl;
    cout << "The value of y is: " << p->gety() << endl;
    

    return 0;
}