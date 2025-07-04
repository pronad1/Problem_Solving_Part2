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
     ll n,m;
     cin>>n>>m;
     string s;
     cin>>s;
     for (int  i = 0; i < m; i++)
     {
        ll l,r;
        cin>>l>>r;
        if((abs(r-l+1)>=2) && l!=1 && r!=n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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