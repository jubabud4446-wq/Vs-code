#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj_list(n);   // safer than vector<int> adj_list[n]

    while(m--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    vector<int> route;

    for(int i = 0; i < n; i++)
    {
        if(adj_list[i].empty()) {
            route.push_back(-1);   // no child exists
            continue;
        }

        int mx = *max_element(adj_list[i].begin(), adj_list[i].end());
        route.push_back(mx);
    }

    for(int x : route)
        cout << x << " ";
}