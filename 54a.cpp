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
    string a;
    cin >> a;
    if (a[0] == '0') {
        cout << 0 << endl;
        return;
    }
    
    ll ans = 1;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '?') {
            if (i == 0)
                ans *= 9;
            else
                ans *= 10;
        }
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