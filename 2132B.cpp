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
    vector<ll> sol;
    for (int k = 1; k <= 18; k++)
    {
        ll base = 1;
        for (int i = 0; i < k; i++)
        {
            base *= 10;
        }
        base += 1;
        if (base > n)
            break;
        if (n % base == 0)
        {
            sol.push_back(n / base);
        }
    }
    sort(sol.begin(), sol.end());
    if (sol.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sol.size() << endl;
        for (size_t i = 0; i < sol.size(); i++)
        {
            if (i != 0)
                cout << " ";
            cout << sol[i];
        }
        cout << endl;
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