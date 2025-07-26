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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for (ll i = 0; i <n; i++)
    {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if (k%2==0)
    {
        ll s=k/2;
        for (int i = s; i < n-s; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    else
    {
        ll s=k/2;
        for (ll  i = n-s-1; i>s; i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<'\n';
    }
    
    
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    
    while(t--)
    {
        solve();
    }
    return 0;
}