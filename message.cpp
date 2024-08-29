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
    string t;
    cin >> t;
    int n = t.size();

    for (int overlap = 1; overlap < n; ++overlap)
    {
        string s = t.substr(0, n - overlap);
        string merged = s + s.substr(overlap);

        if (merged == t)
        {
            cout << "YES" << endl;
            cout << s << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}