#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int H, X, Y;
        cin >> H >> X >> Y;

        int attacksNormalOnly = (H + X - 1) / X;

        int remainingHealth = max(0, H - Y);
        int attacksWithSpecial = 1 + (remainingHealth + X - 1) / X;

        int minAttacks = min(attacksNormalOnly, attacksWithSpecial);
        cout << minAttacks << endl;
    }

    return 0;
}