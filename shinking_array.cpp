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
     vector<int> a(n),s(n),r(n);
     for (int i = 0; i <n; i++)
     {
        cin>>a[i];
     }

     if (n == 2) {
        if (abs(a[0] - a[1]) <= 1)
            cout << 0 << '\n';
        else
            cout << -1 << '\n';
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << '\n';
            return;
        }
    }

    s=a;
    r=a;
    sort(r.rbegin(), r.rend());
    sort(s.begin(), s.end());
    if(s==a||r==a){
        cout<<-1<<'\n';
    }
    else{
        cout<<1<<'\n';
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