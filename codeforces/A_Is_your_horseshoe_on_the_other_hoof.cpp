#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> a;

    for(int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }

    int count = 4 - a.size();

    cout << count << endl;

    return 0;
}