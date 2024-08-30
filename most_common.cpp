#include<bits/stdc++.h>
using namespace std;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n,q;
    cin>>n>>q;
    vector<string>st(n);
    ll ma=0;

    for (int i = 0; i <n; i++)
    {
        cin>>st[i];
        ma=max(ma,(ll)st[i].size());
    }
    
    while (q--) {
        int x;
        cin >> x;
        unordered_map<string, int> suffix_count;
        int max_frequency = 0;

        for (const string& s : st) {
            int len = s.size();
            if (len >= x) {
                string suffix = s.substr(len - x);
                suffix_count[suffix]++;
                max_frequency = max(max_frequency, suffix_count[suffix]);
            }
        }

        cout << max_frequency << '\n';
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