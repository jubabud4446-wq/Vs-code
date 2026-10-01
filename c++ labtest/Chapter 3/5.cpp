#include <bits/stdc++.h>
using namespace std;

class Data
{
    int num;
    public:
    Data(int v)
    {
        num = v;
    }
    void display()
    {
        cout << "Num = " << num << endl;
    }
    friend void multiply(Data& d);
};

void multiply(Data& d)
{
    d.num *= 10;
}

int main()
{
    Data d(5);

    cout << "Before: ";
    d.display();

    multiply(d);

    cout << "After: ";
    d.display();

    return 0;
}