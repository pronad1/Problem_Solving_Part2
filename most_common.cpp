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

    vector<unordered_map<string, int>> suffix_count(ma + 1);
    for (const string& s : st) {
        int len = s.size();
        for (int length = 1; length <= len; ++length) {
            string suffix = s.substr(len - length);
            suffix_count[length][suffix]++;
        }
    }

    vector<int> max_fre(ma + 1, 0);
    for (int length = 1; length <= ma; ++length) {
        for (const auto& entry : suffix_count[length]) {
            max_fre[length] = max(max_fre[length], entry.second);
        }
    }

    while (q--) {
        int x;
        cin >> x;
        
        cout << max_fre[x]<< '\n';
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