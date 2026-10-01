#include <bits/stdc++.h>
using namespace std;

void bfs(int x, int y,
         vector<vector<char>>& grid,
         vector<vector<bool>>& visited,
         int n, int m)
{
    vector<pair<int,int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};

    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty())
    {
        pair<int,int> cell = q.front();
        q.pop();
        
        int cell_x = cell.first;
        int cell_y = cell.second;
        cout << cell_x << " " << cell_y << endl;

        for(int i = 0; i < 4; i++)
        {
            int nx = cell_x + dir[i].first;
            int ny = cell_y + dir[i].second;

            if(nx >= 0 && nx < n &&
               ny >= 0 && ny < m &&
               !visited[nx][ny] &&
               grid[nx][ny] != '#')
            {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
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

    cout << "\nBFS Traversal:" << endl;
    bfs(sourceX, sourceY, grid, visited, n, m);

    return 0;
}