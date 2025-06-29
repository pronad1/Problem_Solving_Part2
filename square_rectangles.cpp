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
    vector<int>a(3),b(3);

    for (int i = 0; i < 3; i++)
    {
        int x,y;
        cin>>x>>y;
        a[i] = x;
        b[i] = y;
    }
    if (a[0]==a[1] && a[1]==a[2] && a[2]==(b[0]+b[1]+b[2]))
    {
        cout<<"YES"<<'\n';
        return;
    }

    if(a[0]==b[0]+b[1] && a[0]==a[1]+a[2] && a[0]==b[0]+b[2]){
        cout<<"YES"<<'\n';
        return;
    }

    if(b[0]==b[1] && b[1]==b[2] && b[2]==(a[0]+a[1]+a[2])){
        cout<<"YES"<<'\n';
        return;
    }

    if((a[0]+a[1])==b[0] && b[0]==(b[1]+b[2]) && b[0]==(a[0]+a[2])){

        cout<<"YES"<<'\n';
        return;
    }
    
   cout<<"NO"<<'\n';
    
    

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