#include <bits/stdc++.h>
using namespace std;

class Data
{
    int val;

    public:
    void setval(int v)
    {
        val = v;
    }
    void display()
    {
        cout << "Value = " << val << endl;
    }
    friend void mode(Data &a);
};

void mode(Data &a)
{
    a.val = 10;
}

int main()
{
    Data a;
    a.setval(5);

    mode(a);
    a.display();

    return 0;
}