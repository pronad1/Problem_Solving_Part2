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
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    for (int i = 0; i <= n - k; ) {
        bool can_hike = true;
        for (int j = 0; j < k; ++j) {
            if (a[i + j] != 0) {
                can_hike = false;
                break;
            }
        }
        if (can_hike) {
            ans++;
            i += k + 1; 
        } else {
            i++;
        }
    }
    cout << ans << '\n';
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