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
    if (n % 2 == 0)
    {
        cout << "YES" << '\n';
    }
    else if (k % 2 == 1 && n >= k && (n - k) % 2 == 0) {
        cout << "YES\n";
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