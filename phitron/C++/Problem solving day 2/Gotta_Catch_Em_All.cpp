#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        long long total_cost = 0;

        for (int i = 0; i < N; i++)
        {
            int A;
            cin >> A;
            total_cost += min(1LL * A * X, 1LL * Y);
        }

        cout << total_cost << '\n';
    }

    return 0;
}
