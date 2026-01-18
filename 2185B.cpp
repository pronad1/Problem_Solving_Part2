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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    auto it = find(a.begin(), a.end(), mx);
    int pos = distance(a.begin(), it);
    swap(a[0], a[pos]);

    ll sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (max(res, a[i]));
        res = max(res, a[i]);
    }
    cout << sum << endl;
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