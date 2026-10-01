#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for(int i = 0; i < n; i++)
        cin >> grid[i];

    int sx, sy, dx, dy;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == 'R')
            {
                sx = i;
                sy = j;
            }
            if(grid[i][j] == 'D')
            {
                dx = i;
                dy = j;
            }
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m,false));
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));

    queue<pair<int,int>> q;
    q.push({sx,sy});
    vis[sx][sy] = true;

    int dirX[4] = {0,0,-1,1};
    int dirY[4] = {1,-1,0,0};

    bool found = false;

    while(!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();

        if(x == dx && y == dy)
        {
            found = true;
            break;
        }

        for(int i = 0; i < 4; i++)
        {
            int nx = x + dirX[i];
            int ny = y + dirY[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m)
            {
                if(!vis[nx][ny] && (grid[nx][ny] == '.' || grid[nx][ny] == 'D'))
                {
                    vis[nx][ny] = true;
                    parent[nx][ny] = {x,y};
                    q.push({nx,ny});
                }
            }
        }
    }

    if(found)
    {
        int x = dx;
        int y = dy;

        while(!(x == sx && y == sy))
        {
            auto p = parent[x][y];
            x = p.first;
            y = p.second;

            if(grid[x][y] == '.')
                grid[x][y] = 'X';
        }
    }

    for(auto &row : grid)
        cout << row << "\n";

    return 0;
}