#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct CharFreq {
    char ch;
    int freq;
    
    // Custom comparator for sorting
    // Sort by frequency ascending, then by character ascending
    bool operator<(const CharFreq& other) const {
        if (freq == other.freq)
            return ch < other.ch;
        return freq < other.freq;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    // Frequency array for 'a' to 'z'
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    vector<CharFreq> oddFreqChars;
    vector<CharFreq> evenFreqChars;

    // Separate characters into odd and even frequency groups
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            CharFreq cf = {char(i + 'a'), freq[i]};
            if (freq[i] % 2 == 1) {
                oddFreqChars.push_back(cf);
            } else {
                evenFreqChars.push_back(cf);
            }
        }
    }

    // Sort both groups by frequency ascending, then alphabetically
    sort(oddFreqChars.begin(), oddFreqChars.end());
    sort(evenFreqChars.begin(), evenFreqChars.end());

    // Output odd frequency characters first
    for (const auto& cf : oddFreqChars) {
        for (int i = 0; i < cf.freq; i++) {
            cout << cf.ch;
        }
    }

    // Then output even frequency characters
    for (const auto& cf : evenFreqChars) {
        for (int i = 0; i < cf.freq; i++) {
            cout << cf.ch;
        }
    }

    cout << "\n";

    return 0;
}