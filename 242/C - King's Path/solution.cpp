#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    int n;
    cin >> n;
    set<pair<int, int>> adj;
    for (int i = 0; i < n; i++) {
        int r, a, b;
        cin >> r >> a >> b;
        for (int j = a; j <= b; j++) adj.insert({r, j});
    }
    map<pair<int, int>, int> dis;
    set<pair<int, int>> vis;
    queue<pair<int, int>> q;
    q.push({x0, y0});
    dis[{x0, y0}] = 0;
    dis[{x1, y1}] = LLONG_MAX;
    vector<pair<int, int>> dxy = {{-1,0},{1,0},{0,1},{0,-1},{-1,1},{-1,-1},{1,-1},{1,1}};
    vis.insert({x0, y0});
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (auto [dx, dy] : dxy) {
            int nx = x + dx, ny = y + dy;
            if (vis.find({nx, ny}) != vis.end()) continue;
            if (adj.find({nx, ny}) != adj.end()) {
                vis.insert({nx, ny});
                q.push({nx, ny});
                dis[{nx, ny}] = dis[{x, y}] + 1;
            }
        }
    }
    if (dis[{x1, y1}] == LLONG_MAX) cout << -1 << '
';
    else cout << dis[{x1, y1}] << '
';
}
 
int32_t main() {
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0LL;
}