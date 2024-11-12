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
    ll n;
    cin>>n;
    vector<vector<int>> matrix(n,vector<int>(n));
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    unordered_map<int,int>dm;

    for (int i = 0; i <n; i++)
    {
        for (int j= 0; j<n; j++)
        {
            int d=i-j;
            if (dm.find(d)!=dm.end())
            {
                dm[d]=min(dm[d],matrix[i][j]);
            }
            else
            {
                dm[d]=matrix[i][j];
            }
            
        }
        
    }
    int op=0;
    for (auto& entry : dm)
    {
        if(entry.second<=0) op+=-entry.second;
    }
    cout<<op<<'\n';
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