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
    int x;
    cin >> x;

    vector<int> digits;
    for (int d = 9; d >= 1; --d)
    {
        if (x >= d)
        {
            digits.push_back(d);
            x -= d;
        }
    }
    if (x > 0)
    {
        cout << -1 << '\n';
    }
    else
    {
        reverse(digits.begin(), digits.end());
        for (int d : digits)
            cout << d;
        cout << '\n';
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