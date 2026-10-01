#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, group_count = 1;
    cin >> n;

    vector<string> mag(n);

    for(int i  = 0; i < n; i++)
    {
        cin >> mag[i];
    }

    for(int i = 0; i < n-1; i++)
    {
        if(mag[i] != mag[i+1])
            group_count++;
    }

    cout << group_count << endl;

    return 0;
}