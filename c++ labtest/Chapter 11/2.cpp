#include <bits/stdc++.h>
using namespace std;

template <class x> x maximum(x a, x b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a = 10, b = 20;
    double c = 1.23, d = 1.32;
    cout << maximum(a,b) << endl;
    cout << maximum(c, d) << endl;
    return 0;
}