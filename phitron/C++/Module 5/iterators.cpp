#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count ++;
    }
    cout << count << endl;


    // string s = "Hello";
    // for (auto i = s.begin(); i < s.end(); i++)
    // {
    //     cout << *i << endl;
    // }
    
    return 0;
}