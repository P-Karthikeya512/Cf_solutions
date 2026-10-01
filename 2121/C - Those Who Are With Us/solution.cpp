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
    int maxi = INT_MIN;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            maxi = max(maxi, v[i][j]);
        }
    }
    vector<pair<int, int>> pr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j] == maxi) pr.push_back({i,j});
        }
    }
    vector<int> rc(n,0),cc(m,0);
    vector<vector<int>> roco(n);
    for(auto [r,c]:pr){
        rc[r]++;cc[c]++;
        roco[r].push_back(c);
    }
    int dist = 0;
    vector<bool> see(m,false);
    for(auto [r,c]:pr){
        if(!see[c]){
            see[c] = true;
            dist++;
        }
    }
    bool can = 0;
    for(int r=0;r<n && !can;r++){
        if(rc[r] == 0) continue;
        int e = 0;
        for(int c:roco[r]){
            if(cc[c] == 1) e++;
        }
        if(dist - e <= 1){
            can = true;
        }
    }
    cout << (can ? maxi - 1 : maxi) << '
';
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