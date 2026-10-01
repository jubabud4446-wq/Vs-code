#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n;
    cin >> n;
    long double num, sum = 0, ans;

    vector<double> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        num = arr[i] / 100;
        sum += num;
    }

    long double temp = sum / n;

    ans = (temp) * 100;

    cout << fixed << setprecision(8) << ans << endl;

    return 0;
}