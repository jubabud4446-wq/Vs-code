#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (cin >> N >> K)
    {
        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        // Deque to store indices of potential maximums
        deque<int> dq;
        
        // Vector to store results for output
        vector<int> results;

        for (int i = 0; i < N; ++i)
        {
            // 1. Remove indices that are out of the current window
            // The window is [i-K+1, i]. Any index <= i-K is out.
            while (!dq.empty() && dq.front() <= i - K)
            {
                dq.pop_front();
            }

            // 2. Remove indices whose corresponding values are smaller than A[i]
            // We want to maintain decreasing order in the deque.
            while (!dq.empty() && A[dq.back()] < A[i])
            {
                dq.pop_back();
            }

            // 3. Add current index
            dq.push_back(i);

            // 4. If we have processed at least K elements, the front is the max
            if (i >= K - 1)
            {
                results.push_back(A[dq.front()]);
            }
        }

        // Print the results
        for (size_t i = 0; i < results.size(); ++i)
        {
            cout << results[i] << (i == results.size() - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}