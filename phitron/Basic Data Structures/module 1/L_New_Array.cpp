#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    vector<int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    vector<int> C;
    for (int i = 0; i < n; i++)
    {
        C.push_back(B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        C.push_back(A[i]);
    }

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }

    return 0;
}