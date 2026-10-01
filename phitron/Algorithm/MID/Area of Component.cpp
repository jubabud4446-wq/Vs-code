#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
vector<vector<bool>> visited;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M && grid[x][y] == '.' && !visited[x][y]);
}

int dfs(int x, int y)
{
    visited[x][y] = true;
    int area = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isValid(nx, ny))
        {
            area += dfs(nx, ny);
        }
    }
    return area;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> grid[i];
    }

    visited.assign(N, vector<bool>(M, false));
    int min_area = INT_MAX;
    bool found_component = false;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == '.' && !visited[i][j])
            {
                found_component = true;
                int area = dfs(i, j);
                min_area = min(min_area, area);
            }
        }
    }

    if (found_component)
    {
        cout << min_area << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }

    return 0;
}
