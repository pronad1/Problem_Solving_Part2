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
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    b = a;
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        ll temp = b[u - 1] + v;
        if (temp > h)
        {
            b = a;
        }
        else
        {
            b[u - 1] = temp;
        }
    }
    for_each(b.begin(), b.end(), [](ll &x)
             { cout << x << " "; });
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