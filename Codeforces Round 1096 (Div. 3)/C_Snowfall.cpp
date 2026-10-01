#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        /*
            a = /3 && /2
            b = /3
            c = /2
            d = none
        */
        vector<int> a, b, c, d;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 3 == 0 && arr[i] % 2 == 0)
                a.push_back(arr[i]);
            else if(arr[i] % 3 == 0)
                b.push_back(arr[i]);
            else if(arr[i] % 2 == 0)
                c.push_back(arr[i]);
            else
                d.push_back(arr[i]);
        }

        for(int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        for(int i = 0; i < c.size(); i++)
            cout << c[i] << " ";
        for(int i = 0; i < d.size(); i++)
            cout << d[i] << " ";
        for(int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}