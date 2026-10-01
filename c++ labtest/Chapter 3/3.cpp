#include <bits/stdc++.h>
using namespace std;

class ClassB;

class ClassA
{
    int val;
    public:
    ClassA(int v)
    {
        val = v;
    }
    friend int max_val(ClassA a, ClassB b);
};

class ClassB
{
    int val;
    public:
    ClassB(int v)
    {
        val = v;
    }
    friend int max_val(ClassA a, ClassB b);
};

int max_val(ClassA a, ClassB b)
{
    if(b.val < a.val)
        return a.val;
    else
        return b.val;
}

int main()
{
    ClassA a(25);
    ClassB b(40);
    
    cout << "Max = " << max_val(a, b) << endl;

    return 0;
}