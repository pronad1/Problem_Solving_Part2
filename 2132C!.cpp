// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;
const int MAX_I = 21;
vector<long long> powers(MAX_I + 2);
vector<long long> cost_table(MAX_I + 1);

//------------------------------------------------------------------------------

void precompute()
{
    powers[0] = 1;
    for (int i = 1; i <= MAX_I + 1; ++i)
    {
        powers[i] = powers[i - 1] * 3;
    }
    for (int i = 0; i <= MAX_I; ++i)
    {
        if (i == 0)
        {
            cost_table[i] = 3;
        }
        else
        {
            cost_table[i] = powers[i + 1] + i * powers[i - 1];
        }
    }
}

void solve(void)
{
    ll n;
    cin >> n;
    ll total_cost = 0;
    int i = 0;
    while (n)
    {
        int r = n % 3;
        total_cost += r * cost_table[i];
        n /= 3;
        i++;
    }
    cout << total_cost << '\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}