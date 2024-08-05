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
    ll o=0,e=0,n;
    cin>>n;
    set<ll>st;

    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        st.insert(o);
        if (o%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        
    }
    if (st.size()==1||e==n||o==n)
    {
        cout<<0<<'\n';
    }
    else if (e!=n && e>0)
    {
        cout<<e<<'\n';
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