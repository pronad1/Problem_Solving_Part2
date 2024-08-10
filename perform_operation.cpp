//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

// Function to calculate the median of a sorted vector
long long median_of_sorted(const vector<long long>& sorted_a) {
    int n = sorted_a.size();
    return sorted_a[(n - 1) / 2];
}

int main() {
    ios::sync_with_stdio(false); // For faster input/output
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        // Calculate initial median
        vector<long long> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        long long initial_median = median_of_sorted(sorted_a);

        // Find potential maximum scores
        long long max_score = LLONG_MIN;

        for (int i = 0; i < n; ++i) {
            if (b[i] == 1) {
                long long a_i = a[i];
                
                // Calculate the potential new score if we increment a[i]
                // We increment up to min(k, max possible increment)
                long long potential_increment = min(k, LLONG_MAX - a_i);
                long long new_a_i = a_i + potential_increment;

                // Calculate new potential median
                // Create a new sorted array with a_i incremented
                vector<long long> new_sorted_a = sorted_a;
                new_sorted_a.erase(find(new_sorted_a.begin(), new_sorted_a.end(), a_i));
                new_sorted_a.push_back(new_a_i);
                sort(new_sorted_a.begin(), new_sorted_a.end());

                // Calculate new median
                long long new_median = median_of_sorted(new_sorted_a);
                long long new_score = new_a_i + new_median;

                max_score = max(max_score, new_score);
            }
        }

        // Also consider the scenario without any operation
        max_score = max(max_score, initial_median + *max_element(a.begin(), a.end()));

        cout << max_score << '\n';
    }

    return 0;
}
