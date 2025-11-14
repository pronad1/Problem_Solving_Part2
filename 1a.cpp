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
    string s;
    cin >> s;
    ll n = s.size();

    ll f = 0, cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '\\' && s[i + 1] == '0')
        {
            f++;
        }
        if (f == 0)
        {
            cnt++;
        }
    }
    if (f == 0)
    {
        cout << n + 1 << " " << n << endl;
    }
    else
    {
        if (f > 1)
        {
            f--;
        }
        cout << n - f << " " << cnt << endl;
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