#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string S, X;
        cin >> S >> X;

        string result = "";
        int n = S.length();
        int m = X.length();

        for (int i = 0; i < n; i++) {

            if (i <= n - m && S.substr(i, m) == X) {
                result += '#';
                i += m - 1;
            } else {
                result += S[i];
            }
        }

        cout << result << endl;
    }
    return 0;
}
