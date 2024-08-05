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
    ll om=-1,od=0,e=0,n;
    cin>>n;

    vector<ll>v,v2;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        if (o%2==0)
        {
            v2.push_back(o);
            e++;
        }
        else
        {
            om=max(om,o);
            od++;
        }
        
    }
    if (e==0||od==0)
    {
        cout<<0<<'\n';
    }
    else
    {
        sort(v2.begin(),v2.end());
        int r=0;
        for (int i = 0; i < v2.size(); i++)
        {
            if (om<v2[i])
            {
                r=1;
                break;
            }
            else
            {
                om+=v2[i];
            }
            
        }
        if (r==1)
        {
            cout<<e+1<<'\n';
        }
        else
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