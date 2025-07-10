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
    ll a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a == b)
    {
        cout << 0 << "\n";
    }
    else if (a > b)
    {
        cout << ((a ^ 1) == b ? y : -1) << "\n";
    }
    else
    {
        ll ans = 0;
        if (x <= y)
        {
            ans = (b - a) * x;
        }
        else
        {
            ll diff = b - a;
            if (diff % 2 == 0)
            {
                ans = (diff / 2) * y + (diff / 2) * x;
            }
            else
            {
                ll half = diff / 2;
                if (a % 2 == 0)
                {
                    ans = (half + 1) * y + half * x;
                }
                else
                    ans = half * y + (half + 1) * x;
            }
        }
        cout << ans << "\n";
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