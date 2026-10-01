#include <bits/stdc++.h>
using namespace std;

struct DSU
{
    vector<int> parent, rank;
    DSU(int n)
    {
        // Resize the parent vector to have n+1 elements. This is used to store the parent of each node in the disjoint set data structure.
        rank.resize(n+1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }
    int find(int x)
    {
        if (parent[x] != x) parent[x] = find(parent[x]);
        return parent[x];
    }
    bool unite(int a, int b)
    {
        a = find(a);
        b = find(b);
        if (a == b) return false; // cycle detected
        if (rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
        return true;
    }
};

int main()
{
    int N, M;
    cin >> N >> M;

    DSU dsu(N);
    int cycleEdges = 0;

    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        if (!dsu.unite(u, v))
        {
            cycleEdges++;
        }
    }

    cout << cycleEdges << "\n";

    return 0;
}