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
    ll f=0,n;
    cin>>n;
    vector<ll>a,b;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        a.push_back(o);
    }
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        b.push_back(o);
    }
    if(a==b){
        cout<<"Bob"<<'\n';
        return;
    }
    reverse(a.begin(),a.end());
    if(a==b){
        cout<<"Bob"<<'\n';
        return;
    }
    cout<<"Alice"<<'\n';
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