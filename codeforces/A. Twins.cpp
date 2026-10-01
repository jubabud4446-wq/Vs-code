#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;


    int sum = 0, my_sum = 0, his_sum = 0, count = 0;

    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end());

    for(int i = n - 1; i >= 0; i--)
    {
        count++;

        my_sum += coins[i];
        his_sum = sum - my_sum;
        if(my_sum > his_sum)
        {
            cout << count << endl;
            return 0;
        }
    }

    return 0;
}