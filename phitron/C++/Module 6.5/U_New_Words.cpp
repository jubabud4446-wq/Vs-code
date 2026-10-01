#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), :: tolower);

    int count = 0, e_count = 0, g_count = 0, y_count = 0, p_count = 0, t_count = 0;

    for (auto i = s.begin(); i != s.end(); i++)
    {
        if (*i == 'e')
            e_count++;
        else if (*i == 'g')
            g_count++;
        else if (*i == 'y')
            y_count++;
        else if (*i == 'p')
            p_count++;
        else if (*i == 't')
            t_count++;
    }
    
    count = min({e_count, g_count, y_count, p_count, t_count});
    cout << count << endl;
    
    return 0;
}