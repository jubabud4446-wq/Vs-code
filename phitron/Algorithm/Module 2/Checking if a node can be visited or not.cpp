#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent])
        {
            if(visited[child])
                continue;
            
            q.push(child);
            visited[child] = true;
        }
    }
}

int main()
{
    cout << "Enter number of nodes and edges: ";
    int n, e;
    cin >> n >> e;

    cout << "Enter source and destination: ";
    
    memset(visited, false, sizeof(visited));
    int source, destination;
    cin >> source >> destination;

    cout << "Enter Graph Data:" << endl;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);        // for undirected graph
    }

    bfs(source);

    if(visited[destination])
        cout << "Yes, it is reachable" << endl;
    else
        cout << "No, it is not reachable" << endl;

    return 0;
}