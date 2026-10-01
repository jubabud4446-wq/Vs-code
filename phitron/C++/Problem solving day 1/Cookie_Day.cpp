#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long answer = LLONG_MAX;
        bool possible = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {  
                possible = true;
                long long waste = a[i] % k;
                answer = min(answer, waste);
            }
        }

        if (!possible) cout << -1 << "\n";
        else cout << answer << "\n";
    }

    return 0;
}