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
     ll n;
     cin>>n;
     vector<ll> a(n+1),pre(n+1,mod),suf(n+2);

     for (int i = 1; i <= n; i++)
     {
        cin>>a[i];
        pre[i]=min(pre[i-1],a[i]);
     }
     
     for (int i = n; i >= 1; i--)
     {
        suf[i]=max(suf[i+1],a[i]);
     }

     for (int i = 1; i <=n; i++)
     {
        cout<<(pre[i]==a[i] || suf[i]==a[i] ? 1 : 0);
     }
     

     cout<<'\n';
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