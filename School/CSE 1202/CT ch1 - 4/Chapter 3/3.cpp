#include <bits/stdc++.h>
using namespace std;

class ClassB;

class ClassA
{
    int valueA;
    public:
    void setA(int a)
    {
        valueA = a;
    }

    friend int max_val(ClassA a, ClassB b);
};

class ClassB
{
    int valueB;
    public:
    void setB(int b)
    {
        valueB = b;
    }

    friend int max_val(ClassA a, ClassB b);
};

int max_val(ClassA a, ClassB b)
{
    return (a.valueA > b.valueB) ? a.valueA : b.valueB;
}

int main()
{
    ClassA a;
    ClassB b;

    a.setA(15);
    b.setB(20);

    cout << "Maximum = " << max_val(a,b);

    return 0;
}