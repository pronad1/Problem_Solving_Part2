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
    map<int,int>rc,cc;
    ll a,b,n;
    cin>>n;
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if (rc[b])
        {
            cnt+=rc[b];
        }
        if (cc[a])
        {
            cnt+=cc[a];
        }
        rc[a]++;
        cc[b]++;
    }
    cout<<cnt<<'\n';
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