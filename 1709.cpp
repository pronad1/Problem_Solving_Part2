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
     cin >> n;
     vector<int> a(n), b(n),t(2*n+1,0),ad(2*n+1,0);
     for(int i=0; i < n; i++)
     {
         cin >> a[i];
     }
     for(int i=0; i < n; i++)
     {
         cin >> b[i];
     }
     t=a;
     t.insert(t.end(), b.begin(), b.end());
     ad=t;
     sort(t.begin(), t.end());
     if(t==ad){
        cout<<0<<'\n';
        return;
     }

     pair<int, int> p;
     for(int i=0; i<n; i++){
        if (a[i]!=n+1){
            
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