#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int W, P, K;
        cin >> W >> P >> K;

        int wooden = min(W, K);
        int plastic = K - wooden;

        int stylishness = 2 * wooden + 1 * plastic;
        cout << stylishness << endl;
    }

    return 0;
}