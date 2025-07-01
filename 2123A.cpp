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
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 4 == 0)
            c0++;
        else if (i % 4 == 1)
            c1++;
        else if (i % 4 == 2)
            c2++;
        else if (i % 4 == 3)
            c3++;
    }
    if (c0 != c3 || c1 != c2)
    {
        cout << "Alice\n";
    }
    else
    {
        cout << "Bob\n";
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