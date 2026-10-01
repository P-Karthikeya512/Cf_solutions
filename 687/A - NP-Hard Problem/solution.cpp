#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool dfs(int node, vector<bool> &vis, vector<vector<int>> &adj, vector<bool> &col, vector<vector<int>> &part) {
    vis[node] = true;
    part[col[node]].push_back(node);
    for (int child : adj[node]) {
        if (!vis[child]) {
            col[child] = !col[node];
            if (!dfs(child, vis, adj, col, part)) return false;
        } else if (col[child] == col[node]) {
            return false;
        }
    }
    return true;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n + 1, false), col(n + 1, false);
    vector<vector<int>> part(2);
    bool is_bipartite = true;
    for (int i = 1; i <= n; i++) {
        if(adj[i].empty()) continue;
        if (!vis[i]) {
            col[i] = 0;
            if (!dfs(i, vis, adj, col, part)) {
                is_bipartite = false;
                break;
            }
        }
    }
    if (!is_bipartite) {
        cout << -1 << '
';
        return;
    }
    for (int i = 0; i < 2; i++) {
        cout << part[i].size() << '
';
        for (int v : part[i]) cout << v << ' ';
        cout << '
';
    }
}
 
int32_t main() {
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}