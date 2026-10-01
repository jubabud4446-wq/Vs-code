#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        while (n > 1)
        {
            if (n % 2 == 0)
                n /= 2;     // reverse of multiply by 2
            else
                n -= 3;     // reverse of add 3
        }

        if (n == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}