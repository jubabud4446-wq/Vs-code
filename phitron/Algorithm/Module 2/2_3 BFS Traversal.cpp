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

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (visited[child])
                continue;

            q.push(child);
            visited[child] = true;
        }
        
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);        // for undirected graph
    }

    bfs(0);

    memset(visited, false, sizeof(visited));
    return 0;
}


/*

_______________________For Disconnected Graph_______________________

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

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);  // undirected graph
    }

    // Run BFS on every component
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            bfs(i);
            cout << endl; // separate components
        }
    }

    return 0;
____________________________________________________________________
*/