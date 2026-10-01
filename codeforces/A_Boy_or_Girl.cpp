#include <bits/stdc++.h>
using namespace std;

int main()
{
    string user_name;
    cin >> user_name;

    set<char> letters;
    for(int i = 0; i < user_name.size(); i++)
    {
        letters.insert(user_name[i]);
    }

    if(letters.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}