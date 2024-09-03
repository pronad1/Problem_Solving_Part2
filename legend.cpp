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
    ll x,y,k;
    cin>>x>>y>>k;
    ll xm=0;
    if (x%k==0)
    {
        xm=x/k;;
    }
    else
    {
        xm=(x/k)+1;
    }
    ll ym=0;
    if (y%k==0)
    {
        ym=y/k;;
    }
    else
    {
        ym=(y/k)+1;
    }
    ll mi=min(xm,ym);
    ll ma=max(xm,ym);
    ll m=mi+ma+(ma-mi);
    if (xm>ym)
    {
        m--;
    }
    
    cout<<m<<'\n';
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