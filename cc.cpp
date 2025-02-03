//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
using ll=long long ;
ll mod = 1e9 + 7;


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    for (int i = 1; i <=t; i++)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>flower(n);

        for (int j = 0; j <n; j++)
        {
            cin>>flower[i].first>>flower[i].second;
        }
        
        int result=0;

        for(auto bed:flower){
            int a=bed.first;
            int b=bed.second;
            int cur=0;
            int c=0;

            while (cur<=k)
            {
                cur+=a;

                if (cur<=k)
                {
                    c++;
                }
                cur=max(cur,cur+b);

            }
            result+=c;
        }
        cout<<"Case "<<i<<": "<<result<<'\n';
    }
return 0;
}