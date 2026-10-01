#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int uppercaseCount = 0, lowercaseCount = 0;
    for (char c : s)
    {
        if(isupper(c))
            uppercaseCount++;
        else
            lowercaseCount++;
    }

    if (uppercaseCount > lowercaseCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}