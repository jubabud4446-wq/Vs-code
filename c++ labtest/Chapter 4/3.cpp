#include <bits/stdc++.h>
using namespace std;

class Value
{
    double num;
    public:
    Value(double n)
    {
        num = n;
    }

    void swap_values(Value &v)
    {
        double temp = num;
        num = v.num;
        v.num = temp;
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Value a(12.5), b(30.5);

    cout << "Before Swap: \n";
    a.display();
    b.display();

    a.swap_values(b);

    cout << "After Swap: \n";
    a.display();
    b.display();

    return 0;
}