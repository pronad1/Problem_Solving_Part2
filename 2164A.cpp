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
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll s;
        cin >> s;
        v.push_back(s);
    }
    ll mn = *min_element(v.begin(), v.end());
    ll mx = *max_element(v.begin(), v.end());
    ll x;
    cin >> x;
    if (x >= mn && x <= mx)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
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