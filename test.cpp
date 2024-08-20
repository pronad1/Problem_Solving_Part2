#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> edges;
        vector<int> parent(n + 1, 0);

        for (int i = 2; i <= n; ++i) {
            // Initially assume the first node as root
            cout << "? 1 " << i << endl;
            cout.flush();
            int x;
            cin >> x;
            // The response node x should be connected to node i
            edges.emplace_back(x, i);
            parent[i] = x;
        }

        // Now, connect the rest of the nodes
        for (int i = 2; i <= n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                cout << "? " << i << " " << j << endl;
                cout.flush();
                int x;
                cin >> x;
                if (x == i || x == j) {
                    if (parent[i] != j && parent[j] != i) {
                        edges.emplace_back(i, j);
                    }
                }
            }
        }

        // Output the found edges
        cout << "!";
        for (auto& edge : edges) {
            cout << " " << edge.first << " " << edge.second;
        }
        cout << endl;
        cout.flush();
    }
    
    return 0;
}
