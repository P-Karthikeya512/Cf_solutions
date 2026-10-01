#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n + 1, false);
    int cyc_compo = 0;
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            queue<int> q;
            q.push(i);
            vis[i] = true;
            bool is_cyc = true;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                if (adj[node].size() != 2) {
                    is_cyc = false;
                }
                for (int neigh : adj[node]) {
                    if (!vis[neigh]) {
                        vis[neigh] = true;
                        q.push(neigh);
                    }
                }
            }
            if (is_cyc) cyc_compo++;
        }
    }
    cout << cyc_compo << endl;
    return;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}