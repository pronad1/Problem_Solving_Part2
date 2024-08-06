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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans=0;
    if ((a>c&&b>=d)||(a>=c&&b>d))
    {
        ans++;
    }
    if ((a>d&&b>=c)||(a>=d&&b>c))
    {
        ans++;
    }
    if ((b>d&&a>=c)||(b>=d&&a>c))
    {
        ans++;
    }
    if ((b>c&&a>=d)||(b>=c&&a>d))
    {
        ans++;
    }
    cout<<ans<<'\n';
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