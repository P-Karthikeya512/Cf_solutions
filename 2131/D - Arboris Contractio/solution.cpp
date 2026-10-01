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
    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<int> deg(n+1,0);
    for(int i=0;i<n-1;i++){
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n <= 2){
        cout << 0 << endl;
        return;
    }
    int lvs = 0;
    for(int i=1;i<=n;i++){
        if(deg[i] == 1) lvs++;
    }
    int max_lvs = 0;
    for(int i=1;i<=n;i++){
        int cnt = 0;
        for(int g : adj[i]) if(deg[g] == 1) cnt++;
        max_lvs = max(cnt, max_lvs);
    }
    cout << lvs - max_lvs << endl;
return ;
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