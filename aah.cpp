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
    vector<int> a(n), ac(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ac = a;
    sort(ac.begin(), ac.end());

    vector<tuple<int, int, int>> ops;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != ac[i])
        {
            auto it = find(a.begin() + i, a.end(), ac[i]);
            int po = distance(a.begin(), it);
            int d = po - i;
            ops.emplace_back(i + 1, po + 1, d);
            int temp = a[po];
            for (int j = po; j > i; j--)
                a[j] = a[j - 1];
            a[i] = temp;
        }
        if (a == ac)
            break;
    }

    cout << ops.size() << '\n';
    for (auto &[l, r, d] : ops)
        cout << l << " " << r << " " << d << '\n';
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