#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        int studentsWithoutTickets = max(0, N - M);
        cout << studentsWithoutTickets << endl;
    }

    return 0;
}