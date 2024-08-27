//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
ll factorial(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
       
}
void fib(int n){
    static int n1=0,n2=1,n3;
    if (n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
        fib(n-1);
    }
}
void solve(void)
{
    int n;
    cin>>n;
    ll r=factorial(n);
    cout<<r<<'\n';
    cout<<0<<" "<<1<<" ";
    fib(n-2);
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