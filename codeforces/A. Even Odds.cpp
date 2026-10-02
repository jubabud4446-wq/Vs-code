#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long ans = 0;
    
    long long half = 0;

    if(n % 2 == 0)
    {
        half = n / 2;
    }
    else
        half = (n + 1) / 2;

    if(k < half)
    {
        ans = k + (k - 1);
    }

    else if(k == half)
    {
        if(n % 2 == 0)
        {
            cout << n - 1 << endl;
            return 0;
        }
        else
        {
            cout << n << endl;
            return 0;
        }
    }

    else
    {
        k = k - half;
        ans = 2 * k;
    }

    cout << ans << endl;
    return 0;
}