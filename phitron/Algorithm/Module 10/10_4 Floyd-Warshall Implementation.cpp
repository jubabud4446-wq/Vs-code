#include <bits/stdc++.h>
using namespace std;

int main()
{

    //initializing the adjacency matrix
    int n, e;
    cin >> n >> e;
    int adj_mat[n][n];


    //setting the initial values of the adjacency matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i == j)
                adj_mat[i][j] = 0;
            else
                adj_mat[i][j] = INT_MAX;
        }
    }


    // inputing edges
    while(e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_mat[a][b] = c;
    }


    //main logic of Floyd Warshall
    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(adj_mat[i][k]!=INT_MAX && adj_mat[k][j]!=INT_MAX && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j])
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
            }
        }
    }

    //output
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(adj_mat[i][j] == INT_MAX)
                cout << "INF ";
            else
                cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}