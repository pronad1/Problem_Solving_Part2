#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<ll>> a(n, vector<ll>(m));
    vector<vector<ll>> b(n, vector<ll>(m - 1));
    
    // Read costs for moving forward
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    
    // Read costs for switching tracks
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            cin >> b[i][j];
        }
    }

    // DP array to store minimum cost to reach each track at each position
    vector<vector<ll>> dp(n + 1, vector<ll>(m, INF));
    dp[0][0] = 0; // Starting point

    // Dynamic programming
    for (int i = 0; i < n; ++i) {
        vector<ll> left(m, INF), right(m, INF);

        // Left-to-right pass for minimum cost at each position
        left[0] = dp[i][0];
        for (int j = 1; j < m; ++j) {
            left[j] = min(left[j - 1] + b[i][j - 1], dp[i][j]);
        }

        // Right-to-left pass for minimum cost at each position
        right[m - 1] = dp[i][m - 1];
        for (int j = m - 2; j >= 0; --j) {
            right[j] = min(right[j + 1] + b[i][j], dp[i][j]);
        }

        // Update the DP table for the next row
        for (int j = 0; j < m; ++j) {
            dp[i + 1][j] = min(left[j], right[j]) + a[i][j];
        }
    }

    // Find the minimum cost and time at the last position
    ll min_cost = INF, min_time = INF;
    for (int j = 0; j < m; ++j) {
        if (dp[n][j] < min_cost) {
            min_cost = dp[n][j];
            min_time = j;
        }
    }

    cout << min_cost << " " << min_time + 1 << endl; // Output 1-based indexing
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
