#include <bits/stdc++.h>
using namespace std;

bool vis[100];
int parent[100];
bool cycle = false;

void dfs(int src, vector<int> adj[])
{
    vis[src] = true;
    for(auto child : adj[src])
    {
        if(!vis[child])
        {
            parent[child] = src;
            dfs(child, adj);
        }
        else if(child != parent[src])
        {
            cycle = true;
            return;
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adj[n + 1];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    cycle = false;

    for(int i=0; i<n; i++)
    {
        if(!vis[i])
            dfs(i, adj);
    }

    if(cycle)
        cout << "Cycle detected\n";
    else
        cout << "No cycle detected\n";

    return 0;
}