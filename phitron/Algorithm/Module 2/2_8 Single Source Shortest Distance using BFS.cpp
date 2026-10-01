#include <bits/stdc++.h>
using namespace std;

void bfs_with_distance(int source, vector<vector<int>>& adj_list, int level[])
{
    queue<int> q;
    q.push(source);
    vector<bool> visited(1005, false);
    visited[source] = true;
    level[source] = 0;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : adj_list[parent])
        {
            if(visited[child])
                continue;
            
            q.push(child);
            visited[child] = true;
            level[child] = level[parent] + 1;
        }
    }
}

int main()
{
    cout << "Enter number of nodes and edges: ";

    int n, e;
    cin >> n >> e;

    cout << "Enter source and destination: ";
    int source, destination;
    cin >> source >> destination;

    int level[1005];
    memset(level, -1, sizeof(level));

    vector<vector<int>> adj_list(n);
    cout << "Enter graph data:" << endl;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);        // for undirected graph
    }

    bfs_with_distance(source, adj_list, level);

    // for(int i = 0; i < n; i++)
    // {
    //     cout << "Distance from " << source << " to " << i << " is: " << level[i] << endl;
    // }
    if(level[destination] == -1)
    {
        cout << "No path exists from " << source << " to " << destination << endl;
    }
    else
        cout << "Shortest distance from " << source << " to " << destination << " is: " << level[destination] << endl;
    
    return 0;
}