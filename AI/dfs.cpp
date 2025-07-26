//Author  :  PROSENJIT MONDOL
#include<bits/stdc++.h>
using namespace std;


bool vis[100005];
void dfs(int s, vector<int> adj[])
{
    vis[s]=true;
    cout << s << " ";
    for (int i = 0; i < adj[s].size(); i++)
    {
        if (!vis[adj[s][i]])
        {
            dfs(adj[s][i], adj);
        }
    }
}
int main()
{
    cout<<"Enter the number of edges:\n";
    int n;
    cin>>n;
    vector<int> adj[n + 1];
    cout<<"Enter the edges (u v) format:\n";

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    dfs(0,adj);
    return 0;
}