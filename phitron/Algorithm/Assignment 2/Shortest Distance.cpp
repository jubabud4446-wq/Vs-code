#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<pair<int, int>>> graph(N + 1);
    for (int i = 0; i < M; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].emplace_back(v, w);
    }

    int Q;
    cin >> Q;

    vector<pair<int,int>> queries(Q);
    set<int> unique_sources;
    for (int i = 0; i < Q; i++)
    {
        cin >> queries[i].first >> queries[i].second;
        unique_sources.insert(queries[i].first);
    }

    const long long INF = 1e15;
    unordered_map<int, vector<long long>> dist_map;

    // Precompute distances for each unique source
    for (int src : unique_sources)
    {
        vector<long long> dist(N + 1, INF);
        dist[src] = 0;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
        pq.emplace(0, src);

        while (!pq.empty())
        {
            auto [curDist, u] = pq.top();
            pq.pop();

            if (curDist > dist[u]) continue;

            for (auto &[v, w] : graph[u])
            {
                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    pq.emplace(dist[v], v);
                }
            }
        }
        dist_map[src] = move(dist);
    }

    // Answer queries in O(1)
    for (auto &[src, dest] : queries)
    {
        if (dist_map[src][dest] == INF)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << dist_map[src][dest] << "\n";
        }
    }

    return 0;
}