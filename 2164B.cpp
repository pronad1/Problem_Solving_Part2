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
    ll a = 0, b = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] % 2)
        {
            a = v[i];
            for (int j = i + 1; j < n; j++)
            {
                int t = (v[j] % a);
                if (t % 2 == 0)
                {
                    b = v[j];
                    break;
                }
            }
        }
        if (b)
            break;
    }
    if (a && b)
    {
        cout << a << ' ' << b << '\n';
    }
    else
    {
        cout << -1 << '\n';
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