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
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    ll m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        string s;
        cin>>s;
        if (s.size()!=n)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            map<char,ll>mp;
            for (int i = 0; i < s.size(); i++)
            {
                if (mp[s[i]]==0)
                {
                    mp[s[i]]=v[i];
                }
                else
                {
                    if (mp[s[i]]!=v[i])
                    {
                        f=1;
                        cout<<"NO"<<'\n';
                        break;
                    }
                    
                }
                
            }
            if (f==0)
            {
                cout<<"YES"<<'\n';
            }
            f=0;
        }
        
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