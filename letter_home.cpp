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
     int n,s;
     cin>>n>>s;
     vector<int> a(n);
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     int mx = *max_element(a.begin(), a.end());
     int mi = *min_element(a.begin(), a.end());

     int ans =min(abs(mx-s), abs(mi-s))+(mx-mi);
        cout<<ans<<"\n";
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