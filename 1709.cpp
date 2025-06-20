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
    vector<int> a(n), b(n), t(2 * n + 1, 0), ad(2 * n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    t = a;
    t.insert(t.end(), b.begin(), b.end());
    ad = t;
    sort(t.begin(), t.end());
    if (t == ad)
    {
        cout << 0 << '\n';
        return;
    }

    vector<pair<int, int>> pairs;
    vector<int> ac(n), bc(n);
    ac = a;
    bc = b;
    sort(ac.begin(), ac.end());
    sort(bc.begin(), bc.end());
    while (ac != a)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (a[i]> a[i + 1])
            {
                pair<int, int> p;
                p.first = 1;
                p.second =i + 1;
                pairs.push_back(p);
                swap(a[i], a[i+1]);
            }
        }
    }
    while (bc != b)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (b[i]> b[i + 1])
            {
                pair<int, int> p;
                p.first = 2;
                p.second =i + 1;
                pairs.push_back(p);
                swap(b[i], b[i+1]);
            }
        }
    }
    

    for(int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            pair<int, int> p;
            p.first = 3;
            p.second = i + 1;
            pairs.push_back(p);
            swap(a[i], b[i]);
        }
    }
    // for(auto j:a)
    // {
    //     cout<<j<<' ';
    // }
    // cout << '\n';

    // for(auto j:b)
    // {
    //     cout<<j<<' ';
    // }
    // cout << '\n';
    cout << pairs.size() << '\n';
    for (auto &p : pairs)
    {
        cout << p.first << ' ' << p.second << '\n';
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