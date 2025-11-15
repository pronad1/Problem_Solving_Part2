// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n, m;
    std::cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    vector<long long> row_xor(n, 0);
    vector<long long> col_xor(m, 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> matrix[i][j];
            row_xor[i] ^= matrix[i][j];
            col_xor[j] ^= matrix[i][j];
        }
    }

    long long danger = 0;
    for (long long r : row_xor)
    {
        danger += r;
    }
    for (long long c : col_xor)
    {
        danger += c;
    }

    long long purngre = danger;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            long long r_i = row_xor[i];
            long long c_j = col_xor[j];

            long long new_danger = danger - r_i - c_j + (r_i ^ c_j);
            purngre = min(purngre, new_danger);
        }
    }

    cout << purngre << "\n";
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}