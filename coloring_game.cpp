// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll c=0,mx=a[n-1];

    for (int i = 2; i < n; i++)
    {
        ll ali=2ll*a[i];
        ll z=max(ali, mx)-a[i];

        int l=0, r=i-1;
        while (l<r)
        {
            ll sum=a[l]+a[r];

            if(sum>z){
                c+=(r-l);
                r--;
            }
            else{
                l++;
            }
        }
        // cout<<c<<' ';
    }
    
    cout<<c<<'\n';
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}