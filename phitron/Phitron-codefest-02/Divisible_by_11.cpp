#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;

    int odd_sum = 0, even_sum = 0;
    int len = num.size();

    for (int i = 0; i < len; i++)
    {
        int digit = num[len - 1 - i] - '0';
        if (i % 2 == 0)
        {
            odd_sum += digit;
        }
        else
        {
            even_sum += digit;
        }
    }

    int diff = abs(odd_sum - even_sum);

    if (diff % 11 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}