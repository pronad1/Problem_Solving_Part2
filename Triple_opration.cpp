//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
const int MAX = 200'007;

int a[MAX], psum[MAX];

int f(int x){
    int c=0;
    while (x)
    {
        x/=3;
        c++;
    }
    return c;
}
void solve(void)
{
    ll l,r;
    cin>>l>>r;
    
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
psum[0]=0;
for (int i = 1; i < MAX-1; i++)
{
    a[i]=f(i);
    psum[i]=psum[i-1]+a[i];
}
for (int i = 0; i < 10; i++)
{
    cout<<psum[i]<<" ";
}

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}