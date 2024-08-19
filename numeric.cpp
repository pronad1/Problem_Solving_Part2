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
{ll n, m;
    cin >> n;
    ll a[n];
    map<ll, vector<ll>> mp;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    cin >> m;
    while (m--)
    {
        string s;
        cin >> s;
        if (s.size() != n)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        ll fl = 1;
        map<char, ll> tt;
        for (auto it : mp)
        {
            char ch = s[it.second[0]];
            // cout<<ch<<' ';
            tt[ch]++;
            if (tt[ch] > 1)
                fl = 0;
            if (fl == 0)
                break;
            for (auto ii : it.second)
            {
                if (s[ii] != ch)
                {
                    fl = 0;
                    break;
                }
            }
        }
 
        if (fl)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
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