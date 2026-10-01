#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int bfs(vector<vector<int>>& adj, vector<vector<bool>> &vis,int i, int j){
    int n = adj.size(), m = adj[0].size();
    queue<pair<int, int>> q;
    q.push({i,j});
    vis[i][j] = true;
    int sum = adj[i][j];
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : dirs) {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && adj[nx][ny] != 0 && !vis[nx][ny]) {
                vis[nx][ny] = true;
                sum += adj[nx][ny];
                q.push({nx, ny});
            }
        }
    }
    return sum;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n, vector<int>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    bool found = false;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> adj[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j] && adj[i][j]){
                int maxi = bfs(adj,vis,i,j);
                ans = max(maxi,ans);
            }
        }
    }
    (ans == INT_MIN)?(cout << 0 << '
'):(cout << ans << '
');
    return;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}