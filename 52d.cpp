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
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (int i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--; r--;
        bool found = false;
        for (int j = 0; j < l; ++j) {
            if (s[j] == s[l]) {
                found = true;
                break;
            }
        }
        for (int j = r + 1; j < n && !found; ++j) {
            if (s[j] == s[r]) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << '\n';
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