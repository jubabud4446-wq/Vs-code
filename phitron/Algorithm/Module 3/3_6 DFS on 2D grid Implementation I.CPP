#include <bits/stdc++.h>
using namespace std;
    
void dfs(int x, int y,
         vector<vector<char>>& grid,
         vector<vector<bool>>& visited,
         int n, int m)
{
    vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};

    cout << x << " " << y << endl;
    visited[x][y] = true;

    for (auto [dx, dy] : dir)
    {
        int nx = x + dx;
        int ny = y + dy;

        if (nx >= 0 && nx < n &&
            ny >= 0 && ny < m &&
            !visited[nx][ny] &&
            grid[nx][ny] != '#')
        {
            dfs(nx, ny, grid, visited, n, m);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int sourceX, sourceY;
    cin >> sourceX >> sourceY;

    dfs(sourceX, sourceY, grid, visited, n, m);
}