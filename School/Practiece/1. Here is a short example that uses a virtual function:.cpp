#include <bits/stdc++.h>
using namespace std;

class Base
{
    public:
    int i;
    Base(int i)
    {
        this->i = i;
    }
    virtual void func()
    {
        cout << "Using base version. i = " << i << endl;
    }
};

class Derived : public Base
{
    public:
    int j;
    Derived(int j) : Base(j)
    {
        this->j = j;
    }
    void func()
    {
        cout << "Using derived version. j = " << j << endl;
    }
};

int main()
{
    Base *p;
    Base b_ob(10);
    Derived d_ob(20);

    p = &b_ob;
    p->func();

    p = &d_ob;
    p->func();

    return 0;
}