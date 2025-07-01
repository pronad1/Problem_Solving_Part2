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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll on = count(s.begin(), s.end(), '1');
    if (on <= k)
    {
        cout << "Alice" << '\n';
        return;
    }

    bool bb_te = false;
    for (int i = 0; i <= n - k; ++i) {
            bool all_one = true;
            for (int j = i; j < i + k; ++j) {
                if (s[j] == '0') {
                    all_one = false;
                    break;
                }
            }
            if (all_one) {
                bb_te = true;
                break;
            }
        }

        if (bb_te)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    
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