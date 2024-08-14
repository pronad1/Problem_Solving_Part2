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
    ll sum=0,n;
    string s;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        sum+=o;
    }
    cin>>s;
    ll sc=0,f=0,l=n-1;
    while (f<l)
    {
        if (s[f]=='R')
        {
            sum-=v[f++];
        }
        if (s[l]=='L')
        {
            sum-=v[l--];
        }
        if(s[f]=='L'&&s[l]=='R')
        {
            sc+=sum;
            sum-=v[f++];
            sum-=v[l--];
        }
        
    }
    cout<<sc<<'\n';
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