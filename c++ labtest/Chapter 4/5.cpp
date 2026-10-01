#include <bits/stdc++.h>
using namespace std;

class Vector_3d
{
    int num1, num2, num3;
    public:
    Vector_3d(int a, int b, int c)
    {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    void add(Vector_3d *a)
    {
        num1 += a->num1;
        num2 += a->num2;
        num3 += a->num3;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "num3 = " << num3 << endl;
    }
};

int main()
{
    Vector_3d v1(1,2,3);
    Vector_3d v2(4,5,6);

    cout << "Before:" << endl;
    v1.display();
    v1.add(&v2);

    cout << "After:" << endl;
    v1.display();
    return 0;
}