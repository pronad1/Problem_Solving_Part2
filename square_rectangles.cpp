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
     int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x=a+c+e;
    int y=b+d+f;

    int o=a+c+f;
    int p=b+d+e;

    int u=a+d+e;
    int v=b+c+f;

    int l=a+d+f;
    int m=b+c+e;

    if(x == y || o == p || u == v || l == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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