#include <bits/stdc++.h>
using namespace std;

int main()
{
    int anton = 0, danik = 0, n;
    cin >> n;
    char s[n];

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        if(s[i] == 'A')
            anton++;
        else
            danik++;
    }

    if(anton > danik)
        cout << "Anton";
    else if(danik > anton)
        cout << "Danik";
    else
        cout << "Friendship";
        
    return 0;
}