#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, a;
    cin >> n >> m >> a;

    if(n < 1 || m < 1 || a < 1 || n > 1000000000 || m > 1000000000 || a > 1000000000)
        return 0;

    cout << (n/a + (n%a != 0)) * (m/a + (m%a != 0)) << endl;

    return 0;
}