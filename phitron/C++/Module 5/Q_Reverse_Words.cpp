#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        string temp = word;
        reverse(temp.begin(), temp.end());
        cout << " " << temp;
    }
    
    return 0;
}