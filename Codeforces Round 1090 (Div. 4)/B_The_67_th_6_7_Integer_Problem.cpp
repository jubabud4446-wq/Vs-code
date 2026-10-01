#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> vec;
        for (int i = 0; i < 7; i++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }

        sort(vec.begin(), vec.end());

        int ans = -vec[0] - vec[1] - vec[2] - vec[3] - vec[4] - vec[5] + vec[6];
        cout << ans << '\n';
    }
    
    return 0;
}