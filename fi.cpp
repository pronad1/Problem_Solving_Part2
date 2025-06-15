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
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    ll ans = 0;

    if (x > y)
    {
        swap(a, b);
        swap(x, y);
    }

    if (k >= a)
    {
        ll max_type1 = (k - a) / x + 1;
        ans += max_type1;
        k -= max_type1 * x;
    }
    
    if (k >= b)
    {
        ll max_type2 = (k - b) / y + 1;
        ans += max_type2;
    }
    cout << ans << endl;
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