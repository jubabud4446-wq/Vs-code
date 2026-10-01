#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    multiset<int> st;
    int q;
    cin >> q;

    while(q--)
    {
        int c;
        cin >> c;

        if(c == 1)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        else
        {
            if(st.empty())
            {
                cout << "empty\n";
            }
            else
            {
                int mn = *st.begin();
                cout << mn << "\n";
                st.erase(mn);
            }
        }
    }

    return 0;
}