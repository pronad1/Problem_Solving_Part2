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
     ll k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    ll ans = 0;

    while (1)
    {
        bool t1=(k>=a);
        bool t2=(k>=b);
        if (t1 && t2)
        {
            if(x<y){
                k-=x;
            }
            else{
                k-=y;
            }
            ans++;
        }
        else if (t1)
        {
            ans++;
            k -= x;
        }
        else if (t2)
        {
            ans++;
            k -= y;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
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