//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int quick(int a[],int n,int beg,int end){
    int left=beg, right=end,loc=beg;
    step2:
    while (a[loc]<=a[right] && loc!=right)
    {
        right--;
    }
    if (loc==right)
    {
        return loc;
    }
    if (a[loc]>a[right])
    {
        int temp=a[loc];
        a[loc]=a[right];
        a[right]=temp;
        loc=right;
    }
    step3:
    while (a[left]<=a[loc] && left!=loc)
    {
        left++;
    }
    if (loc==left)
    {
        return loc;
    }
    if (a[left]>a[loc])
    {
        int temp=a[left];
        a[left]=a[loc];
        a[loc]=temp;
        loc=left;
        goto step2;
    }
    return 0;
}


void solve(void)
{
    int n;
    cin>>n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int top=-1;
    int lower[n],upper[n],beg,end,loc;
    if (n>1)
    {
        top=top+1;
        lower[top]=0;
        upper[top]=n-1;
    }
    while (top>=0)
    {
        beg=lower[top];
        end=upper[top];
        top=top-1;

        loc=quick(v,n,beg,end);

        if (loc-1>beg)
        {
            top=top+1;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if (loc+1<end)
        {
            top=top+1;
            lower[top]=loc+1;
            upper[top]=end;
        }
        
    }
    for(auto element : v)
    {
    cout<<element<<" ";
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