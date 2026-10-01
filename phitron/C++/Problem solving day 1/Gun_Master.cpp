#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int switches = 0;
        int current_gun = 0;

        for (int i = 0; i < n; i++)
        {
            int need = (a[i] > d) ? 1 : 0;

            if (need != current_gun)
            {
                switches++;
                current_gun = need;
            }
        }

        cout << switches << "\n";
    }

    return 0;
}