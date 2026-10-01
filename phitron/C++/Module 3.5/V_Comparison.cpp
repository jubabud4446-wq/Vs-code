#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;

    cin >> a >> s >> b;

    bool result;
    
    switch (s)
    {
    case '<':
        result = (a < b);
        break;
    
    case '>':
        result = (a > b);
        break;
    
    case '=':
        result = (a == b);
        break;
    }
    
    if (result)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }
    
    return 0;
}