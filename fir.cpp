//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

string findw(ll n,ll s){

    ll cur=s;

    while (1)
    {
        int maxRemoval = static_cast<int>(floor(sqrt(n)));
        bool validMove = false;

        if (cur==1)
        {
            for (int i = 1; i <=maxRemoval; i+=2)
            {
                if (n>=i)
                {
                    n-=i;
                    validMove=true;
                    cur=0;
                    break;
                }
                
            }
            if (!validMove)
            {
               return "Evenius";
            }
        }
        else
        {
            for (int i = 2; i <=maxRemoval; i+=2)
            {
                if (n>=i)
                {
                    n-=i;
                    validMove=true;
                    cur=1;
                    break;
                }
                
            }
            if (!validMove)
            {
               return "Oddius";
            }
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
    for(int i=1;i<=t;i++)
     {
       ll n,s;
       cin>>n>>s;
       string p=findw(n,s);

       cout<<"Case "<<i<<": "<<p<<'\n';
       
     }
return 0;
}