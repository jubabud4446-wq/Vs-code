#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        int first_3_sum = 0, last_3_sum = 0;

        for (int j = 0; j < 3 && j < num.length(); j++)
        {
            first_3_sum += num[j] - '0';
            last_3_sum += num[num.length() - j - 1] - '0';
        }

        if (first_3_sum == last_3_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}