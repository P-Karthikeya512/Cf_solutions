#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
vector<bool> vis;
vector<vector<int>> adj;
vector<bool> col;
 
bool dfs(int node){
    vis[node] = true;
    for(auto child : adj[node]){
        if(vis[child]){
            if(col[node] == col[child]) return false;
        }
        else{
            col[child] = !col[node];
            if(!dfs(child)) return false;
        }
    }
    return true;
}
 
void solve()
{
    int n;
    cin >> n;
    vis.assign(n + 1, false);
    adj.assign(n + 1, vector<int>());
    col.assign(n + 1, 0);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool is_bipartite = dfs(1);
    int l = 0, r = 0;
    for(int i = 1; i <= n; i++){
        if(col[i] == 0) l++;
        else r++;
    }
    cout << (1LL * l * r - (n - 1)) << '
';
    return;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}