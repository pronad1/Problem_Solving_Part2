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
     ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    ll tot=0;
    ll mab=0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        tot += v[i];
        mab+=(v[i] + x - 1) / x;

    }   

    ll mib=(tot + x - 1) / x;

    cout<<mib<<" "<<mab<<"\n";
    

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