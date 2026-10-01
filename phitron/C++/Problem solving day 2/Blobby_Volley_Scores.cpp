#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int A = 0, B = 0;
        char Server = 'A';

        for (int i = 0; i < n; i++)
        {
            if (Server == 'A')
            {
                if (s[i] == 'A')
                {
                    A++;
                }
                else
                {
                    Server = 'B';
                }
            }
            else if (Server == 'B')
            {
                if (s[i] == 'B')
                {
                    B++;
                }
                else
                {
                    Server = 'A';
                }
            }
        }
        
        cout << A << " " << B << endl;
    }
    return 0;
}