#include <bits/stdc++.h>
using namespace std;

void bfs_with_distance_and_path(int source, vector<vector<int>>& adj_list, int level[], vector<int>& parent)
{
    queue<int> q;
    q.push(source);
    vector<bool> visited(1005, false);
    visited[source] = true;
    level[source] = 0;

    while(!q.empty())
    {
        int parent_node = q.front();
        q.pop();

        for (int child : adj_list[parent_node])
        {
            if(visited[child])
                continue;
            
            q.push(child);
            visited[child] = true;
            level[child] = level[parent_node] + 1;
            parent[child] = parent_node;
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

    vector<int> parent(1005, -1); // to store parent of each node for path printing
    vector<vector<int>> adj_list(n);
    cout << "Enter graph data:" << endl;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);        // for undirected graph
    }

    bfs_with_distance_and_path(source, adj_list, level, parent);

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


    cout << "Path from " << source << " to " << destination << " is: " << endl;
    int current = destination;
    vector<int> path;
    while(current != -1)
    {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    for(int x : path)
    {
        cout << x;
        if(x != destination)
            cout << " -> ";
    }
    cout << endl;

    return 0;
}

