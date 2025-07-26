// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
vector<ll> vs;

void solve(void)
{
    ll n;
    cin >> n;
    ll cnt = 1;
    for (ll i = 2; i <=n; i++)
    {
        ll x=pow(i,i);
        ll r=sqrt(x);
        if (r*r==x)
        {
            cout<<x<<i;
            cnt++;
        }
        
    }
    
    cout << cnt << '\n';
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