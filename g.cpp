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
     ll n;
     cin>>n;
     if (n<=3)
     {
        cout<<-1<<'\n';
        return;
     }
     if (n%2==0)
     {
        for (int i = 1; i < n-2; i++)
        {
            cout<<i<<" ";
        }
        cout<<n-1<<" "<<n-2<<" "<<n<<'\n';
     }
     else
     {
        cout<<n<<" ";
        for (int i = 2; i <=n; i++)
        {
            if (i==2 || i==n)
            {
                if(i==2)
                cout<<1<<" ";
                else
                cout<<2<<" ";
            }
            else
            {
                cout<<i<<" ";
            }
            
        }
        cout<<'\n';
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