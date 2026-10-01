#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string target = "20";

    regex result(target);
    s = regex_replace(s, result, "k");
    
    cout << s << endl;
    
    return 0;
}