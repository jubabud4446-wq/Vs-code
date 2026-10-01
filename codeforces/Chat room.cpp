#include <bits/stdc++.h>
using namespace std;

int main()
{
    char check[] = "hello";

    string s;
    cin >> s;

    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == check[j])
        {
            j++;
        }
    }

    if (j == strlen(check))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}