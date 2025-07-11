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
    string maxNum = "";
    
    for (int x = 0; x < n; ++x) {
        for (int t = 0; t < 10; ++t) {
            string current = "";
            for (int i = 0; i < n; ++i) {
                int digit = (t + abs(x - i)) % 10;
                current += (char)('0' + digit);
            }
            maxNum = max(maxNum, current);
        }
    }
    cout <<maxNum<< '\n';
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