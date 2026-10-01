#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    cin >> t;

    while (t--)
    {
        cin >> n >> x;
        if (n > x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}