#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

long long maxEarnings(int n, int k, vector<pair<int, int>>& bottles) {
    map<int, vector<int>> brandMap;
    for (auto& bottle : bottles) {
        int brand = bottle.first;
        int cost = bottle.second;
        brandMap[brand].push_back(cost);
    }
    vector<int> maxBrandCosts;
    for (auto& entry : brandMap) {
        vector<int>& costs = entry.second;
        sort(costs.rbegin(), costs.rend()); 
        int maxCostSum = 0;
        for (int i = 0; i < min(n, (int)costs.size()); i++) {
            maxCostSum += costs[i];
        }
        maxBrandCosts.push_back(maxCostSum);
    }
    sort(maxBrandCosts.rbegin(), maxBrandCosts.rend());
    long long totalEarnings = 0;
    for (int i = 0; i < min(n, (int)maxBrandCosts.size()); i++) {
        totalEarnings += maxBrandCosts[i];
    }

    return totalEarnings;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; i++) {
            cin >> bottles[i].first >> bottles[i].second;
        }
        cout << maxEarnings(n, k, bottles) << "\n";
    }

    return 0;
}
