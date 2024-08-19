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
    stack<int>st;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        st.push(x);
    }
    for (int i = 0; i < n; i++)
    {
       cout<<st.top()<<"\n";
       st.pop();
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