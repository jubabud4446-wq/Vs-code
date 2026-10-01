#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<int>> grid(N, vector<int>(M));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }
    vector<vector<int>> pref(N, vector<int>(M, 0));
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            pref[i][j] = grid[i][j];
            if(i > 0)
            {
                pref[i][j] += pref[i-1][j];
            }
            if(j > 0)
            {
                pref[i][j] += pref[i][j-1];
            }
            if(i > 0 && j > 0)
            {
                pref[i][j] -= pref[i-1][j-1];
            }
        }
    }

    while(Q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int res = pref[x2][y2];
        if(x1 > 0)
        {
            res -= pref[x1-1][y2];
        }
        if(y1 > 0)
        {
            res -= pref[x2][y1-1];
        }
        if(x1 > 0 && y1 > 0)
        {
            res += pref[x1-1][y1-1];
        }

        cout << res << "\n";
    }

    return 0;
}