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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    if (n == 3)
    {
        cout << 0 << '\n';
        return;
    }

    if (s.size() == 1)
    {
        ll x = (n * (n - 1) * (n - 2)) / 6;
        cout << x << '\n';
        return;
    }

    ll c = 0;
    for (int i = n - 2; i > 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            
            if ((a[i] + a[j]) > a[n - 1])
            {
                c += (i-j);
                break;
                
            }
        }
        
    }

    

    for (int i = n - 2; i > 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if ((a[j] + a[i] + a[i - 1]) > a[n - 1])
            {
                c += (i-j-1);
                break;
            }
        }
    }
    cout<<c<<'\n';
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