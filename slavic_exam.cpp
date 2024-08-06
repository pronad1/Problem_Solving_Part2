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
    string a, b;
    cin >> a >> b;
    int j = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[j] || a[i] == '?')
        {
            j++;
        }
    }
    //j++;
    if (j >= b.length())
    {
        cout << "YES" << '\n';

        int j = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == b[j])
            {
                cout<<b[j];
                j++;
            }
            else if (a[i] == '?'&&j<b.length())
            {
                cout<<b[j];
                j++;
            }
            
            else if (j>=b.length()&&a[i]=='?')
            {
               cout<<'a';
            }
            
            else
            {
                cout<<a[i];
            }
            
        }
        cout<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
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