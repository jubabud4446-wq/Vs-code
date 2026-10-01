#include <bits/stdc++.h>
using namespace std;

vector<int> sort_and_reverse(vector<int>& a)
{
    sort(a.rbegin(), a.rend());
    return a;
}

vector<int> fun(vector<int>& a)
{
    a = sort_and_reverse(a);
    vector<int> temp;
    int x = a[0];
    for (int i = 0; i < a.size(); i++)
        temp.push_back(x ^ a[i]);
    
    a = temp;
    a.erase(a.begin());
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        while(a.size() > 1)
        {
            a = fun(a);
        }

        cout << a[0] << '\n';
    }

    return 0;
}