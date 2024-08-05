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
    int sum=0,n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for (int i = 0; i < 4*n; i++)
    {
        if (s[i]!='?'&&mp[s[i]]<n)
        {
            sum++;
            mp[s[i]]++;
        }
        
    }
    cout<<sum<<'\n';
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