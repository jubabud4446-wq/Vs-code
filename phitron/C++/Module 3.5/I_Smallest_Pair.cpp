#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long min_prev = a[0] - 0;
        long long ans = LLONG_MAX;
        for (int j = 1; j < n; j++) {
            long long current = min_prev + a[j] + j;
            if (current < ans) {
                ans = current;
            }
            if (a[j] - j < min_prev) {
                min_prev = a[j] - j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}