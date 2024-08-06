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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int smi=min(a,b);
    int sma=max(a,b);
    int vmi=min(c,d);
    int vma=max(c,d);
    if (smi>vma)
    {
        cout<<4<<'\n';
        return;
    }
    if (smi>vmi&&sma>vma&&smi<vma)
    {
        cout<<2<<'\n';
        return;
    }
    cout<<0<<'\n';
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