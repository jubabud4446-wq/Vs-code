#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        // Use long long for sticker type to handle large values (prevents overflow)
        // Store sticker type and its 1-based position
        vector<pair<long long, int>> stickers;

        for (int i = 1; i <= n; ++i) {
            long long type;
            cin >> type;
            stickers.push_back({type, i});
        }

        // Sort the vector based on the sticker type (first element of pair)
        // This groups identical types together in ascending order
        sort(stickers.begin(), stickers.end());

        // Iterate through the sorted vector to calculate sums
        // We start from the first element
        if (n > 0) {
            // Initialize with the first sticker's data
            long long current_type = stickers[0].first;
            long long current_sum = stickers[0].second; // Use long long for sum

            for (int i = 1; i < n; ++i) {
                // If the current sticker is the same type as the previous one
                if (stickers[i].first == current_type) {
                    current_sum += stickers[i].second;
                } 
                else {
                    // Type changed. Print the result for the previous type
                    cout << current_type << " " << current_sum << "\n";
                    
                    // Reset for the new type
                    current_type = stickers[i].first;
                    current_sum = stickers[i].second;
                }
            }
            // Print the result for the last processed type
            cout << current_type << " " << current_sum << "\n";
        }
    }

    return 0;
}