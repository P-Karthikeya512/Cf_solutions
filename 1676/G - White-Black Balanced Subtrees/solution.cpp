#include <bits/stdc++.h>
using namespace std;
 
vector<int> dfs(int u, int &cnt, string &color, vector<int> &vis, vector<vector<int>> &adj){
    vis[u]++;
    int b = (color[u] == 'B'), w = (color[u] == 'W');
    for(int v : adj[u]){
        if(!vis[v]){
            vector<int> curr = dfs(v, cnt, color, vis, adj);
            b += curr[0];
            w += curr[1];
        } 
    }
    if(b == w) cnt++;
    return {b, w};
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n);
        for(int v = 0; v < n - 1; v++){
            int u;
            cin >> u;
            u--;
            adj[u].push_back(v + 1);
        };
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> vis(n, 0);
        dfs(0, cnt, s, vis, adj);
        cout << cnt << endl;
    }
    return 0;
}