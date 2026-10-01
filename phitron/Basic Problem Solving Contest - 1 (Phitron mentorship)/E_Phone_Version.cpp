#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    string s = to_string(year);

    regex re(s);

    s = regex_replace(s, re, "K" + s.substr(2));

    cout << s << endl;

    return 0;
}