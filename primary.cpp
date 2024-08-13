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
    string n;
    cin >> n;
    if (n[0] != '1'||n.size()<=2)
    {
        cout << "NO" << '\n';
        return;
    }
   
    
    if (n.size() == 3)
    {
        if (n[0] == '1'&&n[1]=='0' && n[2] != '0' && n[2] != '1')
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
        return;
    }
    if (n.size() > 3)
    {
        if (n[0] == '1' &&n[1]=='0' && n[2] != '0')
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
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