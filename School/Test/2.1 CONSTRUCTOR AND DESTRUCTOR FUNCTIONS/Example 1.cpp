#include <bits/stdc++.h>
using namespace std;

class myclass
{
    int a, b;
    public:
        myclass(int x, int y);
        void show();
};

myclass :: myclass(int x, int y)
{
    a = x;
    b = y;
}

void myclass :: show()
{
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
}

int main()
{
    myclass ob(10, 20);
    ob.show();
    return 0;
}