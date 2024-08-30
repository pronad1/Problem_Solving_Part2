//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;

const ll maxn = 1000000;
const ll mod = 1000000007;
//------------------------------------------------------------------------------
vector<ll>div(maxn+1,0);

void solve(void)
{
    for (ll i = 2; i <=maxn; i++)
    {
        if (div[i]==0)
        {
            for (ll j = i; j <=maxn;j+=i)
            {
                
                ll temp=j;
                ll cnt=0;
                while (temp%i==0)
                {
                    temp/=i;
                    cnt++;
                }
                if (div[j]==0)
                {
                    div[j].push_back(cnt+1);
                }
                else
                {
                    div[j].push_back(div[j]*(cnt+1));
                }
                
            }
            
        }
        
    }
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();

  ll t=1;
  cin>>t;
    while(t--)
     {
       ll n;
       cin>>n;
       cout<<div[n]%mod<<'\n';
     }
return 0;
}