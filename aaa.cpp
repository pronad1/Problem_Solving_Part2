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
     string s;
     cin>>s;
     for(int i=0;i<n;i++){
        char ch=s[i];
        if(ch=='0' || ch=='1'){
            continue;
        }
        char b;
        if(i%2==0){
            b='0';
        }
        else{
            b='1';
        }
        for(int j=i;j<n;j++){
            if(s[j]==ch){
                s[j]=b;
            }
        }
     }
     for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            cout<<"NO"<<'\n';
            return;
        }
     }
        cout<<"YES"<<'\n';
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