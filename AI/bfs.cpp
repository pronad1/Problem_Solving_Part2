//Author  :  PROSENJIT MONDOL
#include<bits/stdc++.h>
using namespace std;

bool vis[100005];

void bfs(int s, vector<int> adj[])
{
    queue<int> q;
    vis[s] = true;
    q.push(s);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
            }
        }// Print a new line after processing each node
    }
}

int main()
{
    cout << "Enter the number of edges:\n";
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    cout << "Enter the edges (u v) format:\n";
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // For undirected graph, also add: adj[v].push_back(u);
    }

    bfs(0, adj);
    return 0;
}
