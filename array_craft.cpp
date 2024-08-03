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
    int n,x,y;
    cin>>n>>x>>y;
    x--;
    y--;
    vector<int>v(n,1);
    int e;
    e=-1;
    for (int i = x+1; i < n; i++)
    {
        v[i]=e;
        e*=-1;
    }
    e=-1;
    for (int i = y-1; i>=0; i--)
    {
        v[i]=e;
        e*=-1;
    }
    for(int i=0;i<n;i++){
      if(i){cout << " ";}
      cout << v[i];
    }cout << "\n";
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