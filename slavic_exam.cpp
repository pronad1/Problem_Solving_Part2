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
        if (a[i] == '?')
        {
            if (j<b.size())
            {
                a[i]=b[j++];
            }
            else
            {
                a[i]='a';
            }
            
        }
        else if (a[i]==b[j])
        {
            j++;
        }
        
    }
    if (j>=b.size())
    {
        cout<<"YES"<<'\n'<<a<<'\n';
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