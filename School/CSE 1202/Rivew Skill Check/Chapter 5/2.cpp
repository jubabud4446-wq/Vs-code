#include <bits/stdc++.h>
using namespace std;

class myclass
{
    int x, y;
    public:
    myclass(int a, int b)
    {
        x = a;
        y = b;
    }
    myclass()
    {
        x = 0;
        y = 0;
    }
    void get()
    {
        cout << "x = " << x << " | y = " << y << endl;
    }
};

int main()
{
    myclass a, b(52, 53);
    a.get();
    b.get();
    return 0;
}