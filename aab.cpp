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
    string s;
    cin >> s;
    set<char> se(s.begin(), s.end());
    if (se.size() == 1) {
        cout << -1 << '\n';
    }
    else if (se.size() == 4 || se.size() == 3) {
        cout << 4 << '\n';
    }
    else if (se.size() == 2) {
       map<char, int> cnt;
        for (char ch : s) cnt[ch]++;
        if (cnt.begin()->second == 2 && (++cnt.begin())->second == 2)
            cout << 4 << '\n';
        else
            cout << 6 << '\n';
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