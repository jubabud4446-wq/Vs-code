#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> om(n), addy(n);

        for (int i = 0; i < n; i++)
            cin >> om[i];

        for (int i = 0; i < n; i++)
            cin >> addy[i];

        int om_streak = 0, addy_streak = 0;
        int om_max = 0, addy_max = 0;

        for (int i = 0; i < n; i++)
        {
            om[i] != 0 ? om_streak++ : om_streak = 0;
            addy[i] != 0 ? addy_streak++ : addy_streak = 0;

            om_max = max(om_max, om_streak);
            addy_max = max(addy_max, addy_streak);
        }

        if (om_max > addy_max)
            cout << "Om\n";
        else if (addy_max > om_max)
            cout << "Addy\n";
        else
            cout << "Draw\n";
    }

    return 0;
}