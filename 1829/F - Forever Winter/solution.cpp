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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    map<int,int> freq;
    for(int i=1;i<=n;i++){
        freq[adj[i].size()]++;
    }
    int x,y;
    vector<int> v;
    for(auto [key,val]: freq){
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    if(v.size() == 3){
        x = v[1];
        y = v[2] / v[1];
    }else{
        x = v[0] - 1;
        y = v[1]/x;
    }
    cout << x << " " << y << '
';
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