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
    string ans,s;
    cin>>s;
    map<char, int> mp;
    for(char c : s)
    {
        mp[c]++;
    }
    for (int i = 0; i <10; i++)
    {
        if(mp['9'-i]==0){
            for(int j=9-i;j<10;j++){
                if(mp[j+'0']>0){
                    ans += j+'0';
                    mp[j+'0']--;
                    break;
                }
            }
        }
        else{
            ans += '9'-i;
            mp['9'-i]--;
        }
    }
    
     cout<<ans<<'\n';
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