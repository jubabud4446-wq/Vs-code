#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v;
    long long w;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<Edge> edges(M);
    for (int i = 0; i < M; i++)
    {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int source;
    cin >> source;

    int T;
    cin >> T;

    // Bellman-Ford algorithm to find shortest paths and detect negative cycles
    const long long INF = 1e15;
    vector<long long> dist(N + 1, INF);
    dist[source] = 0;

    for (int i = 1; i <= N - 1; i++)
    {
        bool updated = false;
        for (auto &e : edges)
        {
            if (dist[e.u] != INF && dist[e.u] + e.w < dist[e.v])
            {
                dist[e.v] = dist[e.u] + e.w;
                updated = true;
            }
        }
        if (!updated) break;
    }

    // Check for negative cycle
    bool negativeCycle = false;
    for (auto &e : edges) {
        if (dist[e.u] != INF && dist[e.u] + e.w < dist[e.v])
        {
            negativeCycle = true;
            break;
        }
    }

    if (negativeCycle)
    {
        cout << "Negative Cycle Detected\n";
        return 0;
    }

    while (T--)
    {
        int dest;
        cin >> dest;
        if (dist[dest] == INF)
        {
            cout << "Not Possible\n";
        }
        else
        {
            cout << dist[dest] << "\n";
        }
    }

    return 0;
}