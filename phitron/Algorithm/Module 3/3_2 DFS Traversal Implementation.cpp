#include <bits/stdc++.h>
using namespace std;

void dfs(int source, vector<int> adj[], vector<bool> &visited)
{
    

    cout << source << " ";
    visited[source] = true;
    for(int child : adj[source])
    {
        if(!visited[child])
        {
            dfs(child, adj, visited);
        }
    }
}
int main()
{
    cout << "Enter the number of nodes and edges: ";
    int n ,e;
    cin >> n >> e;

    int sorce;
    cout << "Enter the source node: ";
    cin >> sorce;

    vector<int> adj[n+1];
    vector<bool> visited(n+1, false);

    cout << "Enter Graph Data: " << endl;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cout << "\nDFS Traversal: " << endl;
    dfs(sorce, adj, visited);

    return 0;
}