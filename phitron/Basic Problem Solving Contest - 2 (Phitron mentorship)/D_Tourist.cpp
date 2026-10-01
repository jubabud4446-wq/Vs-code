#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, A, B;
        cin >> N >> A >> B;

        int minDistance = 1e9;
        for (int i = 0; i < N; i++)
        {
            int X, Y;
            cin >> X >> Y;

            int distance = abs(A - X) + abs(B - Y);
            minDistance = min(minDistance, distance);
        }

        cout << minDistance << endl;
    }

    return 0;
}