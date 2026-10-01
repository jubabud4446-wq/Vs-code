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
        int n, W;
        cin >> n >> W;

        vector<int> weight(n), value(n);

        for (int i = 0; i < n; i++)
            cin >> weight[i];

        for (int i = 0; i < n; i++)
            cin >> value[i];

        // dp[w] = max value for capacity w
        vector<long long> dp(W + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int w = W; w >= weight[i]; w--)
            {
                dp[w] = max(dp[w],
                            dp[w - weight[i]] + value[i]);
            }
        }

        cout << dp[W] << "\n";
    }

    return 0;
}