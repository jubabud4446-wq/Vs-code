#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int main() {
    // 1. Read Input Dimensions
    int n, m;
    if (!(cin >> n >> m)) return 0;

    // 2. Initialize Grid
    // Using a vector of vectors to store the grid values.
    vector<vector<int>> grid(n, vector<int>(m));

    // Reading grid values.
    // We read character by character. This works for both formats:
    // Space separated (e.g. "1 1 0") and continuous strings (e.g. "110").
    // cin >> char skips whitespace automatically.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char c;
            cin >> c;
            grid[i][j] = c - '0';
        }
    }

    int border_islands = 0;
    int center_islands = 0;

    // Directions for moving Up, Down, Left, Right
    int dr[] = {0, 0, 1, -1};
    int dc[] = {1, -1, 0, 0};

    // 3. Iterate through the grid to find islands
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            // If we find land (1), we found a new island
            if (grid[i][j] == 1) {
                
                bool is_border = false;
                
                // BFS Setup
                queue<pair<int, int>> q;
                q.push({i, j});
                grid[i][j] = 0; // Mark as visited immediately

                while (!q.empty()) {
                    pair<int, int> curr = q.front();
                    q.pop();
                    int r = curr.first;
                    int c = curr.second;

                    // Check if current cell is on the border
                    if (r == 0 || r == n - 1 || c == 0 || c == m - 1) {
                        is_border = true;
                    }

                    // Check 4 neighbors
                    for (int k = 0; k < 4; ++k) {
                        int nr = r + dr[k];
                        int nc = c + dc[k];

                        // Check bounds and if neighbor is land
                        if (nr >= 0 && nr < n && nc >= 0 && nc < m && grid[nr][nc] == 1) {
                            grid[nr][nc] = 0; // Mark visited
                            q.push({nr, nc});
                        }
                    }
                }

                // 4. Update counters based on island type
                if (is_border) {
                    border_islands++;
                } else {
                    center_islands++;
                }
            }
        }
    }

    // 5. Output Result
    if (border_islands > center_islands) {
        cout << "Yes" << endl;
        cout << border_islands << " " << center_islands << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}