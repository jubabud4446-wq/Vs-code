#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n + 1];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        // for undirected graph
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});

        // for directed graph
        // adj[a].push_back({b, c});
    }
    
    return 0;
}