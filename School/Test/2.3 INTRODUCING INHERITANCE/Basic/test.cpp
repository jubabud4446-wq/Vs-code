#include <bits/stdc++.h>
using namespace std;

class B
{
    int i;
    public:
        int get_i();
        void set_i(int x);
};

class D : public B
{
    int j;
    public:
        int mul();
        void set_j(int x);
};

void B::set_i(int x)
{
    i = x;
}

int B::get_i()
{
    return i;
}

void D::set_j(int x)
{
    j = x;
}

int D::mul()
{
    return j * get_i();
}

int main()
{
    D obj;
    obj.set_i(5);
    obj.set_j(10);
    cout << obj.mul() << endl;
    return 0;
}