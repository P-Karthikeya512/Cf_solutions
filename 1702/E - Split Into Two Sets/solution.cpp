#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
bool dfs(int u, int c, vector<int> &color, vector<vector<int >> &adj){
    color[u] = c;
    for(int v : adj[u]){
        if(color[v] == -1){
            if(dfs(v, 1 - c, color, adj) == false) return false;
        }
    else if(color[v] == c) return false;
}
return true;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int> last(n, -1), freq(n, 0);
    vector<vector<int >> adj(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;
        freq[a]++; freq[b]++;
        if(last[a] == -1) last[a] = i;
        else{
            adj[i].push_back(last[a]);
            adj[last[a]].push_back(i);
        }
        if(last[b] == -1) last[b] = i;
        else{
            adj[i].push_back(last[b]);
            adj[last[b]].push_back(i);
        }
    }
    for(int x : freq){
        if(x != 2){
            cout << "NO
";
            return;
        }
    }
    vector<int> color(n, -1);
    bool yes = true;
    for(int i = 0; i < n; i++){
        if(color[i] == -1){
            yes &= dfs(i, 0, color, adj);
        }
    }
    if(yes) cout << "YES
";
    else cout << "NO
";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
return 0;
}