#include <bits/stdc++.h>
using namespace std;

bool is_lucky(int n)
{
    if(n == 0) return false;

    while(n > 0)
    {
        int digit = n % 10;
        if(digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    long long n;
    cin >> n;

    int count = 0;

    while(n > 0)
    {
        int digit = n % 10;
        if(digit == 4 || digit == 7)
            count++;
        n /= 10;
    }

    if(is_lucky(count))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}