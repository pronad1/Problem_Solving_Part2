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
    char d;
    cin >> n >> d;
    string s;
    cin >> s;
    string res;
    bool inserted = false;
    for (int i = 0; i < n; ++i) {
        if (!inserted && s[i] < d) {
            res += d;
            inserted = true;
        }
        res += s[i];
    }
    if (!inserted) res += d;
    cout << res << '\n';
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