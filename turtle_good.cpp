#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    string s;
    cin >> s;

    // Frequency map of characters
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    // Create a vector of pairs (character, frequency) and sort it by frequency
    vector<pair<int, char>> charFreq;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            charFreq.push_back({freq[i], 'a' + i});
        }
    }

    // Sort by frequency
    sort(charFreq.begin(), charFreq.end(), greater<pair<int, char>>());

    // Reconstruct the string in a way that tries to minimize consecutive duplicates
    string result = "";
    while (!charFreq.empty()) {
        for (auto &cf : charFreq) {
            if (cf.first > 0) {
                result += cf.second;
                cf.first--;
            }
        }

        // Remove fully used characters
        charFreq.erase(remove_if(charFreq.begin(), charFreq.end(), [](pair<int, char> &cf) {
            return cf.first == 0;
        }), charFreq.end());
    }

    cout << result << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
