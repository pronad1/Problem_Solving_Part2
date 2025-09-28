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
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    for (int i = 0; i <= n - 3; ++i)
    {
        set<int> vals;
        for (int j = i; j < i + 3; ++j)
            if (a[j] != -1)
                vals.insert(a[j]);
        if (vals.size() > 1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
