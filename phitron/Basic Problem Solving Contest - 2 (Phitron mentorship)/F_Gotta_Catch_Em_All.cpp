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

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int totalCost = 0;
        for (int i = 0; i < N; i++)
        {
            totalCost += min(A[i] * X, Y);
        }

        cout << totalCost << endl;
    }

    return 0;
}