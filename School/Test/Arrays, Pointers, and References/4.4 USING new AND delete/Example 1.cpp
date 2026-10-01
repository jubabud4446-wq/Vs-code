#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    p = new int;

    if(!p)
    {
        cout << "Allocation error" << endl;
        return 1;
    }

    *p = 100;

    cout << "Here is an integer at p: " << *p << endl;

    delete p;

    return 0;
}