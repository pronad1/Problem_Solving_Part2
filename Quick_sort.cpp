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
    int n;
    cin>>n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int top=-1;
    int lower[n],upper[n],beg,end,loc;
    if (n>1)
    {
        top=top+1;
        lower[top]=0;
        upper[top]=n-1;
    }
    while (top>=0)
    {
        beg=lower[top];
        end=upper[top];
        top=top-1;

        loc=quick(v,n,beg,end);
        
    }
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}