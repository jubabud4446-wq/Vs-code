#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int X, N;
        cin >> X >> N;

        int requiredPlanes = (N + 100 - 1) / 100;
        int additionalPlanes = max(0, requiredPlanes - X);

        cout << additionalPlanes << endl;
    }

    return 0;
}