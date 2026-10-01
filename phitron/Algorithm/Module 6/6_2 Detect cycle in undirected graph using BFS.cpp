#include <bits/stdc++.h>
using namespace std;

bool vis[100];
int parent[100];
bool cycle = false;

void bfs(int src, vector<int> adj[])
{
    queue<int> q;
    q.push(src);

    vis[src] = true;
    while (!q.empty())
    {
        int prnt = q.front();
        q.pop();

        for(auto child : adj[prnt])
        {
            if(vis[child] && parent[prnt] != child)
            {
                cycle = true;
                return;
            }

            if(!vis[child])
            {
                vis[child] = true;
                parent[child] = prnt;
                q.push(child);
            }
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
            bfs(i, adj);
    }

    if(cycle)
        cout << "Cycle detected\n";
    else
        cout << "No cycle detected\n";

    return 0;
}