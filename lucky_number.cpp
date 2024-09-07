// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
vector<string> gs(int le)
{
    vector<string> re;
    int h = le / 2;
    string ba = string(h, '4') + string(h, '7');
    sort(ba.begin(), ba.end());

    do
    {
        re.push_back(ba);
    } while (next_permutation(ba.begin(), ba.end()));
    return re;
}
string find(ll n)
{
    string sn = to_string(n);
    int le = sn.length();
    while (1)
    {
        if (le % 2 == 0)
        {
            vector<string> sp = gs(le);
            sort(sp.begin(), sp.end());
            for (auto p : sp)
            {
                if (stoll(p) >= n)
                {
                    return p;
                }
            }
        }
        le+=2;
    }
}
//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    cout << find(t) << '\n';
    return 0;
}