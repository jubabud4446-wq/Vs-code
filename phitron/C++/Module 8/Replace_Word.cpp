#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        string target = x;

        regex result(target);
        s = regex_replace(s, result, "#");

        cout << s << endl;
    }
    return 0;
}
