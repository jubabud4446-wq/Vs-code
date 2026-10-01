#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int palindrom = 1;
    int len = s.length();

    for (int i = 0; i <= len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            palindrom = 0;
            cout << "NO" << endl;
            break;
        }
    }
    
    if(palindrom)
    {
        cout << "YES" << endl;
    }
    
    return 0;
}