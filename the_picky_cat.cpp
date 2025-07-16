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
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (v[0]<0){
        sort(v.rbegin(), v.rend());
        ll x=v[0]*-1;
        n=n-1;
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]>x)
            {
                count++;
            }
        }
        count++;
        if(count>= n/2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }   
        return;
    }
    cout<< "YES" << endl;
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