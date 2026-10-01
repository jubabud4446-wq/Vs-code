#include <bits/stdc++.h>
using namespace std;

template <class x> void swap_elements(x &a, x &b)
{
    x temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    float x = 2.5, y = 3.1;
    swap_elements(x, y);
    cout << x << " " << y << endl;

    return 0;
}