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
    int x,y,k;
    cin>>x>>y>>k;
    vector<pair<ll,ll>>v;
    if (k%2)
    {
      v.push_back({x,y});
    }
    
    for(int i=1;i<k;i+=2)
    {
        v.push_back({x-i,y-i});
        v.push_back({x+i,y+i});
    }
    
    for (auto it:v)
    {
      cout<<it.first<<" "<<it.second<<'\n';
    }
    
    
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