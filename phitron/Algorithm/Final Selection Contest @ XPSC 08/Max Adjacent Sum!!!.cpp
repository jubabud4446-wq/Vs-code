#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Handle edge case where no adjacent pairs exist
        if (n < 2) {
            cout << 0 << endl;
            return 0;
        }

        long long max_odd = 0; // Max value at 1st, 3rd, 5th... positions (indices 0, 2, 4...)
        long long max_even = 0; // Max value at 2nd, 4th, 6th... positions (indices 1, 3, 5...)
        
        long long val;
        for (int i = 0; i < n; ++i) {
            cin >> val;
            
            // The problem statement uses 1-based indexing:
            // Positions 1, 3, 5... are Odd. (Indices 0, 2, 4... in code)
            // Positions 2, 4, 6... are Even. (Indices 1, 3, 5... in code)
            
            if (i % 2 == 0) {
                // Odd position (1-based)
                if (val > max_odd) {
                    max_odd = val;
                }
            } else {
                // Even position (1-based)
                if (val > max_even) {
                    max_even = val;
                }
            }
        }

        // The maximum possible adjacent sum is the sum of the largest odd-positioned 
        // number and the largest even-positioned number.
        cout << max_odd + max_even << endl;
    }

    return 0;
}