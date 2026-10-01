#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    int alpha = 0;
    int capital = 0;
    cin >> x;
    
    if (x >= 'a' && x <= 'z')
    {
        alpha = 1;
        capital = 0;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        alpha = 1;
        capital = 1;
    }
    else
    {
        alpha = 0;
    }
    
    if (alpha == 1)
    {
        cout << "ALPHA" << endl;
        if (capital == 1)
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }
    else
    {
        cout << "IS DIGIT" << endl;
    }
    return 0;
}