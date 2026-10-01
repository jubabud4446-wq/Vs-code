#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K, W;
    if (!(cin >> N >> K >> W)) return 0;

    vector<int> powers(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> powers[i];
    }

    // Calculate maximum possible sum of powers.
    // Since it's a permutation of 1..N, sum is N*(N+1)/2.
    int max_power_sum = N * (N + 1) / 2;

    // DP Table: dp[k][p] = minimum cost to achieve exactly power p with exactly k items.
    // Initialize with a large value (infinity).
    // We use a 2D vector. Dimensions: (K+1) x (max_power_sum + 1).
    // 1e9 is sufficiently large as max cost is approx N*N/2.
    vector<vector<int>> dp(K + 1, vector<int>(max_power_sum + 1, 1e9));

    // Base case: 0 items, 0 power costs 0 energy.
    dp[0][0] = 0;

    int current_total_power = 0;

    // Iterate through each treasure item
    for (int i = 0; i < N; ++i)
    {
        int p = powers[i];    // Power of current item
        int c = i + 1;        // Cost is 1-based index

        // Add power to running total for optimization bounds
        current_total_power += p;

        // Update DP table backwards to ensure each item is used at most once.
        // Iterate k from K down to 1.
        for (int k = K; k >= 1; --k)
        {
            // Iterate power 'p_sum' from current max possible power down to 'p'.
            // We only need to check up to current_total_power.
            int limit = min(current_total_power, max_power_sum);
            for (int p_sum = limit; p_sum >= p; --p_sum) {
                // If the state without this item is reachable (not infinity)
                if (dp[k-1][p_sum - p] != 1e9)
                {
                    // Relax the cost
                    dp[k][p_sum] = min(dp[k][p_sum], dp[k-1][p_sum - p] + c);
                }
            }
        }
    }

    int max_val = 0;

    // Search for the maximum power achievable within constraints.
    // Check all counts k from 0 to K.
    // Iterate power from max possible down to 0.
    for (int p = max_power_sum; p >= 0; --p)
    {
        for (int k = 0; k <= K; ++k)
        {
            if (dp[k][p] <= W)
            {
                // Since we iterate power from high to low, the first time
                // we find a valid cost, it is the maximum power.
                // We can break immediately.
                max_val = p;
                goto end_loop; // Exit both loops
            }
        }
    }

    end_loop:
    cout << max_val << endl;

    return 0;
}