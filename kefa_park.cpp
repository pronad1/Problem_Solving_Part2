//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
const int N = 1e5 + 10;
using namespace std;
vector<int> graph[N];
vector<int> vis(N, 0);
int n, k;
int ans = 0;

void dfs(int node, int parent = -1){
    for (auto child : graph[node]){
        if (child == parent)
            continue;
        if (vis[child] && vis[node])
            vis[child] += vis[node];
 
        if (vis[child] > k)
            continue;
        if (graph[child].size() == 1)
            ++ans;
        dfs(child, node);
    }
}
void solve(void)
{
    cin>>n>>k;
    for (int i = 1; i <=n; i++){
        cin >> vis[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1);
    cout<<ans<<'\n';

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