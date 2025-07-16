#include <iostream>
#include <vector>
using namespace std;

bool isPossible(int n, int m, int p, int q) {
    vector<int> a(n, 0);

    for (int i = 0; i <= n - p; ++i) {
        int sum = 0;
        for (int j = i; j < i + p; ++j)
            sum += a[j];
        int diff = q - sum;
        a[i + p - 1] += diff;
    }

    int total = 0;
    for (int x : a)
        total += x;

    return total == m;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, p, q;
        cin >> n >> m >> p >> q;
        if (isPossible(n, m, p, q))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
