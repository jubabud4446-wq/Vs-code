#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string s[6];

        for (int i = 0; i < 6; i++)
        {
            cin >> s[i];
        }

        bool hattrick = false;

        for (int i = 0; i + 2 < 6; i++)
        {
            if (s[i] == "W" && s[i+1] == "W" && s[i+2] == "W")
            {
                hattrick = true;
                break;
            }
        }

        if (hattrick == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}