#include <bits/stdc++.h>
using namespace std;

long long tetranacci(int n)
{
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;

    long long T0 = 0, T1 = 1, T2 = 1, T3 = 2, Tn;
    for (int i = 4; i <= n; i++)
    {
        Tn = T3 + T2 + T1 + T0;
        T0 = T1;
        T1 = T2;
        T2 = T3;
        T3 = Tn;
    }
    return Tn;
}

int main()
{
    int n;
    cin >> n;
    cout << tetranacci(n) << endl;
    return 0;
}