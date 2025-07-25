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
    string a, b;
    cin >> a >> b;
    int na = a.size();
    int nb = b.size();
    int lc = lcm(na, nb);

    if (na > nb)
    {
        string xa = a,xb = b;
        for (int i = 0; i < lc / na-1; i++)
        {
            a += xa;
        }
        for (int i = 0; i <lc/nb-1; i++)
        {
            b+= xb;
        }
        
        if (a == b) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
    }
    else
    {
        string xa = a,xb = b;
        for (int i = 0; i < lc / nb-1; i++)
        {
            b += xb;
        }
        for (int i = 0; i < lc / na-1; i++)
        {
            a += xa;
        }
        if (a == b) {
            cout << a << endl;
        } else {
            cout << -1 << endl;
        }
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