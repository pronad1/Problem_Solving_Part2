#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct TrieNode {
    int count;  // count of strings ending at this node
    unordered_map<char, TrieNode*> children;  // children nodes

    TrieNode() : count(0) {}
};

void insert(TrieNode* root, const string& suffix) {
    TrieNode* current = root;
    for (char c : suffix) {
        if (!current->children[c])
            current->children[c] = new TrieNode();
        current = current->children[c];
        current->count++;
    }
}

int findMaxFrequency(TrieNode* root, int length) {
    TrieNode* current = root;
    while (length > 0 && current) {
        char max_char = 0;
        TrieNode* next_node = nullptr;

        for (auto it = current->children.begin(); it != current->children.end(); ++it) {
            if (!next_node || it->second->count > next_node->count) {
                max_char = it->first;
                next_node = it->second;
            }
        }

        current = next_node;
        length--;
    }

    return current ? current->count : 0;
}

void solve() {
    int n, q;
    cin >> n >> q;
    vector<string> st(n);
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        cin >> st[i];
        max_len = max(max_len, (int)st[i].size());
    }

    vector<TrieNode*> tries(max_len + 1, nullptr);

    for (const string& s : st) {
        int len = s.size();
        for (int length = 1; length <= len; ++length) {
            string suffix = s.substr(len - length);
            if (!tries[length]) tries[length] = new TrieNode();
            insert(tries[length], suffix);
        }
    }

    vector<int> max_frequencies(max_len + 1, 0);
    for (int length = 1; length <= max_len; ++length) {
        if (tries[length])
            max_frequencies[length] = findMaxFrequency(tries[length], length);
    }

    while (q--) {
        int x;
        cin >> x;
        cout << max_frequencies[x] << '\n';
    }

    // Clean up dynamically allocated memory
    for (int i = 1; i <= max_len; ++i) {
        if (tries[i]) delete tries[i];
    }
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
