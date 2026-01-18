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
    ll n;
    cin >> n;
    set<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }
    vector<ll> a_vec(a.begin(), a.end());
    sort(a_vec.begin(), a_vec.end());

    ll f = 0, ans = 0, st = a_vec[0];
    for (ll i = 0; i < n; i++)
    {
        if (a_vec[i] == st)
        {
            f++;
            st++;
        }
        else
        {
            f = 1;
            st = a_vec[i];
            st++;
        }

        ans = max(ans, f);
    }
    cout << ans << "\n";
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