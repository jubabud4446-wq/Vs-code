#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test) {
        int n;
        string s;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            s += c;
        }
        vector<bool> solved(26, false);
        int total = 0;
        for (char c : s) {
            int prob = c - 'A';
            total += 1; // for solving
            if (!solved[prob]) {
                total += 1; // extra for first solve
                solved[prob] = true;
            }
        }
        cout << total << endl;
    }
    return 0;
}
