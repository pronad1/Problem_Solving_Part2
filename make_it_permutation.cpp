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
    int n;
     cin>>n;
     cout << (2*n-1) << '\n';
     cout<<1 << ' '<<1<<' '<<n<<'\n';
     for(int i= 2; i <= n; i++)
     {
        cout<<i<<' '<<1<<' '<<i-1<< '\n';
        cout << i << ' ' << i << ' ' << n << '\n';
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