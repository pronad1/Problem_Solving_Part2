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
    vector<ll>v1,v2;
    ll sum=0;
    for(int i=1;i<=k-1;i++)
    {
        v1.push_back(i);
        v2.push_back(i);
        sum+=i;
    }
    v1.push_back(x*k-sum);
    v2.push_back(y*k-sum);
    for (int i = 0; i < k; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<'\n';
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