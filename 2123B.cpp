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
    ll n, j, k;
    cin >> n >> j >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll po = a[j - 1];
    int weak = 0, same = 0, strong = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < po)
        {
            weak++;
        }
        else if (a[i] == po)
        {
            same++;
        }
        else
        {
            strong++;
        }
    }

    ll tot=weak + same-1;
    if(strong > 0)
    {
        tot += strong-1;
    }

    if (tot >= n-k)
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