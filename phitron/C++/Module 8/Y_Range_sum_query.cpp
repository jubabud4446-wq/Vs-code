#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    vector<long long> prefix_sum(n + 1, 0);
    prefix_sum[0] = v[0];
    for (int i = 1; i <= n; ++i)
        prefix_sum[i] = prefix_sum[i - 1] + v[i - 1];
    
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
    return 0;
}