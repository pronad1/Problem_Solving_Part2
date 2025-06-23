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
     vector<int> a(n);
     for (int i = 0; i <n; i++)
     {
        cin>>a[i];
     }

     if(n==2){
        if((a[0]==a[1])||(abs(a[0]-a[1])==1)){
            cout<<0<<'\n';
        }else{
            cout<<-1<<'\n';
     }
     return;
    }

    int f=0;
    for (int  i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1]){
            cout<<0<<'\n';
            return;
        }
        if((abs(a[i]-a[i+2])==1)||a[i]==a[i+2]){
            cout<<1<<'\n';
            return;
        }
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