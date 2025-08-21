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
    int n, m;
    string a, b, c;
    cin >> n >> a;
    cin >> m >> b;
    cin >> c;

    string result = a;

    for (int i = 0; i < m; i++)
    {
        if (c[i] == 'V')
        {
            result = b[i] + result;
        }
        else
        {
            result = result + b[i];
        }
    }

    cout << result << endl;
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