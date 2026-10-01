#include <bits/stdc++.h>
using namespace std;
 
void dfs(int u, vector<vector<int>> &adj, vector<int> &vis, vector<int> &c, vector<int> &ans){
    vis[u] = 1;
    bool curr = (bool)c[u];
    for(int v : adj[u]){
        if(!vis[v]){
            curr &= c[v];
            dfs(v, adj, vis, c, ans);
        }
    }
    if(curr) ans.push_back(u);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int src;
        vector<int> c(n + 1);
        vector<vector<int>> adj(n + 1);
        for(int i = 1; i <= n; i++){
            int u;
            cin >> u >> c[i];
            if(u == -1) src = i;
            else adj[u].push_back(i);
        }
        vector<int> vis(n + 1), ans;
        dfs(src, adj, vis, c, ans);
        if(ans.empty()){
            cout << -1 << endl;
        }else{
            sort(ans.begin(), ans.end());
            for(int i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}