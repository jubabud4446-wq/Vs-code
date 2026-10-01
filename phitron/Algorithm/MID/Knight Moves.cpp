#include <bits/stdc++.h>
using namespace std;

int N, M;
int knightX, knightY, queenX, queenY;

// Possible knight moves (8 directions)
int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

bool isValid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M);
}

int bfs()
{
    vector<vector<bool>> visited(N, vector<bool>(M, false));
    queue<pair<int,int>> q;
    queue<int> dist;

    q.push({knightX, knightY});
    dist.push(0);
    visited[knightX][knightY] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front(); q.pop();
        int d = dist.front(); dist.pop();

        if (x == queenX && y == queenY)
        {
            return d;
        }

        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (isValid(nx, ny) && !visited[nx][ny])
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
                dist.push(d + 1);
            }
        }
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        cin >> N >> M;
        cin >> knightX >> knightY;
        cin >> queenX >> queenY;

        cout << bfs() << "\n";
    }

    return 0;
}
