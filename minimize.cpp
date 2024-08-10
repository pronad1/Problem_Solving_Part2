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
    ll v[n],v2[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    v2[0]=v[n-1];
    for (int i = 1; i < n; i++)
    {
        v2[i]=v[i-1];
    }
    
    
    for (int i = 0; i < n-1; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<v2[n-1]<<'\n';
    
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