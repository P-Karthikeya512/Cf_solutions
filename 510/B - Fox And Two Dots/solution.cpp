#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool detect_bfs(int n_x, int n_y, int s_x, int s_y, vector<vector<bool>> &vis, vector<string> &adj, char col) {
    int n = adj.size(), m = adj[0].size();
    vis[n_x][n_y] = true;
    queue<pair<pair<int, int>, pair<int, int>>> q;
    q.push({{n_x, n_y}, {s_x, s_y}});
    vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
    while (!q.empty()) {
        auto [chi_x, chi_y] = q.front().first;
        auto [par_x, par_y] = q.front().second;
        q.pop();
        for (auto [dx, dy] : dir) {
            int nw_x = chi_x + dx, nw_y = chi_y + dy;
            if (nw_x >= 0 && nw_x < n && nw_y >= 0 && nw_y < m && adj[nw_x][nw_y] == col) {
                if (!vis[nw_x][nw_y]) {
                    vis[nw_x][nw_y] = true;
                    q.push({{nw_x, nw_y}, {chi_x, chi_y}});
                } else if (nw_x != par_x || nw_y != par_y) {
                    return true;
                }
            }
        }
    }
    return false;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> adj(n);
    for (int i = 0; i < n; i++) cin >> adj[i];
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    bool has_cycle = false;
    for (int i = 0; i < n && !has_cycle; i++) {
        for (int j = 0; j < m && !has_cycle; j++) {
            if (!vis[i][j]) {
                if (detect_bfs(i, j, -1, -1, vis, adj, adj[i][j])) {
                    has_cycle = true;
                    break;
                }
            }
        }
    }
    cout << (has_cycle ? "Yes" : "No") << '
';
}
 
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}