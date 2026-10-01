#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    vector<int> arr;
    for(long long int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            arr.push_back(i);
    }

    for(long long int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            arr.push_back(i);
    }

    cout << arr[k-1] << endl;

    return 0;
}