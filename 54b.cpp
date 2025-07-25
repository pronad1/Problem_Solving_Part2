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
    string s;
    cin >> s;

    ll n = s.size();
    if (n == 1)
    {
        if(s[0] == '^')
        {
            cout << "1\n";
            return;
        }
        else
        {
            cout << "2\n";
            return;
        }
    }


    vector<char> st;

    if(s[0]=='_'){
        st.push_back('^');
    }

    for (int i = 0; i <n; i++)
    {
        if (!st.empty() && st[st.size()-1] == '_'&&s[i]!='^')
            {
                st.push_back('^');
            }



        st.push_back(s[i]);
    }
    if (st[st.size() - 1] == '_')
    {
        st.push_back('^');
    }
    
    cout<<st.size()-n<<"\n";
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