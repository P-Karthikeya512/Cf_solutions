#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
vector<pair<int,int>> bfs(int x1, int y1, vector<vector<int>> &adj) {
    int n = adj.size();
    queue<pair<int,int>> q;
    set<pair<int,int>> vis;
    q.push({x1,y1});
    vis.insert({x1,y1});
    vector<pair<int,int>> dxy = {{-1,0},{1,0},{0,-1},{0,1}};
    while(!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for(auto [dx, dy] : dxy) {
            int nx = x + dx, ny = y + dy;
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(vis.find({nx,ny}) != vis.end() || adj[nx][ny]) continue;
            q.push({nx,ny});
            vis.insert({nx,ny});
        }
    }
    vector<pair<int,int>> ans(vis.begin(), vis.end());
    return ans;
}
 
void solve() {
    int n;
    cin >> n;
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    r1--; c1--; r2--; c2--;
    vector<vector<int>> adj(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for(int j = 0; j < n; j++) {
            adj[i][j] = row[j] - '0';
        }
    }
    vector<pair<int,int>> s = bfs(r1, c1, adj);
    bool reachable = false;
    for(auto [x, y] : s) {
        if(x == r2 && y == c2) {
            reachable = true;
            break;
        }
    }
    if(reachable) {
        cout << 0 << endl;
        return;
    }
    vector<pair<int,int>> t = bfs(r2, c2, adj);
    int min_dis = INT_MAX;
    for(auto [x1, y1] : s) {
        for(auto [x2, y2] : t) {
            int dis = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
            min_dis = min(min_dis, dis);
        }
    }
    cout << min_dis << endl;
}
 
int32_t main() {
    fastio();
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}