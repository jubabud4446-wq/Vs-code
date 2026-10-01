#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, car = 0;
        cin >> n;

        for (int j = 0; j < n; j += 4)
        {
            car++;
        }
        
        cout << car << endl;
    }
    
    return 0;
}