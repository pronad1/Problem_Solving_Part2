// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool isPerfectSquare(ll n) {
    ll root = sqrt(n);
    return root * root == n;
}

bool isbe(string s,ll n){
    ll k=sqrt(n);
    for (int i = 0; i <k; i++)
    {
        if (s[i]!='1'||s[n-k+i]!='1')
        {
            return false;
        }
    }
    for (int i = 1; i <k-1; i++)
    {
        if (s[i*k] != '1' || s[(i + 1) * k - 1] != '1') return false;
        for (int j = 1; j< k-1; j++)
        {
            if (s[i * k + j] != '0') return false;
        }
        
    }
    return true;
}

void solve(void)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (!isPerfectSquare(n))
    {
        cout << "No" <<'\n';
    }
    else if (isbe(s,n))
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout << "No" <<'\n';
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