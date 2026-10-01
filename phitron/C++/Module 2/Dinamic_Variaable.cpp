#include <bits/stdc++.h>
using namespace std;

int *p;

int fun()
{
    static int x = 10;
    p = &x;
    cout << "fun -> " << *p << endl;
    return x;
}

int main()
{
    int y = fun();
    cout << "Main -> " << *p << endl;
    return 0;
}