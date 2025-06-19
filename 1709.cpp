//Author  :  PROSENJIT MONDOL

#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
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
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            int x = i + 1;
            int pos_a = -1, pos_b = -1;
            // Find position of x in vector a
            auto it_a = find(a.begin(), a.end(), x);
            if (it_a != a.end())
            {
                pos_a = distance(a.begin(), it_a);
                // pos_a is the position of x in a
            }
            // Find position of x in vector b
            auto it_b = find(b.begin(), b.end(), x);
            if (it_b != b.end())
            {
                pos_b = distance(b.begin(), it_b);
                // pos_b is the position of x in b
            }

            pair<int, int> p;
            if (pos_a == -1)
            {
                p.first = 3;
                swap(a[i], b[pos_b]);
            }
            else
            {
                p.first = 1;
            }
            p.second = x;
            pairs.push_back(p);
        }
    }
    // for(auto j:a)
    // {
    //     cout<<j<<' ';
    // }
    // cout << '\n';
    for (int i = 0; i < n; i++)
    {
        if (b[i] != n+ i + 1)
        {
            int x = n+i + 1;
            int pos_b = -1;
            auto it_b = find(b.begin(), b.end(), x);
            if (it_b != b.end())
            {
                pos_b = distance(b.begin(), it_b);
                // pos_b is the position of x in b
            }

            pair<int, int> p;
            p.first = 2;
            p.second = x;
            pairs.push_back(p);
            swap(b[i], b[pos_b]);
        }
    }
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

    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}