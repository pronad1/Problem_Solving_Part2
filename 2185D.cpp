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
    ll n, m, h;
    cin >> n >> m >> h;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<ll, ll>> ops(m);
    for (int i = 0; i < m; i++)
    {
        cin >> ops[i].first >> ops[i].second;
    }

    int lc = -1;
    unordered_map<ll, ll> temp;

    for (int i = 0; i < m; i++)
    {
        ll u = ops[i].first - 1;
        ll v = ops[i].second;

        if (temp[u] + a[u] + v > h)
        {
            temp.clear();
            lc = i;
        }
        else
        {
            temp[u] += v;
        }
    }

    vector<ll> b = a;
    for (int i = lc + 1; i < m; i++)
    {
        b[ops[i].first - 1] += ops[i].second;
    }

    for (ll i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << "\n";
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