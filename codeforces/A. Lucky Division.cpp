#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> lucky = {
        4, 7, 44, 47, 74, 77,
        444, 447, 474, 477,
        744, 747, 774, 777
    };

    int n, check = 0;
    cin >> n;

    for(int i = 0; i < lucky.size(); i++)
    {
        if(n == lucky[i])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    for(int check : lucky)
    {
        if(n % check == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
        
    return 0;
}