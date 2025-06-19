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
    int n,m;
    cin>>n>>m;
    vector<vector<int>> ma(n, vector<int>(m));
    
    int mx=0;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          int x;
          cin>>x;
          ma[i][j] = x;
          mx = max(mx,x);
       }
    }

    int tot=0,mx2=0;
    vector<int> row(n+1,0), col(m+1,0);
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          row[i] += (ma[i][j] == mx);
          col[j] += (ma[i][j] == mx);
          tot += (ma[i][j] == mx);
       }
    }

    // for(auto x:row) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(auto x:col) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
          mx2 = max(mx2, row[i] + col[j] - (ma[i][j] == mx));
          //cout <<"tot: "<<tot<< "i: " << i << " j: " << j << " mx2: " << mx2 << endl;
       }
    }


    if(mx2 == tot) {
        cout << mx - 1 << endl;
    } else {
        cout << mx << endl;
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