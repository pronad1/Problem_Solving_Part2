//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
void push(int stack[],int top,int maxst,int item){
    if (top==maxst)
    {
        cout<<"OVERFLOW"<<'\n';
        return;
    }
    else
    {
        top++;
        stack[top]=item;
    }
    
}
void solve(void)
{
    int top=0,n;
    cin>>n;
    int stack[n];
    int maxst=n;
    for (int i = 0; i <n; i++)
    {
        int item;
        cin>>item;
        push(stack,top,maxst,item);
    }
    for (int i = 0; i <n; i++)
    {
        cout<<stack[i]<<'\n';
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