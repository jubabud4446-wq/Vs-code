#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        int money;

        if (y >= 2 * x)
        {
            money = (n / 2) * y + (n % 2) * x;
        }
        else
        {
            money = n * x;
        }

        cout << money << '\n';
    }

    return 0;
}