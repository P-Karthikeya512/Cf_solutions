#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
class Dsu{
    public:
       vector<int> rank, par;
       Dsu(int n){
          rank.resize(n+1,1);
          par.resize(n+1);
          iota(par.begin(),par.end(),0);
       }
       int findUPar(int u){
          if(u == par[u]) return u;
          return par[u] = findUPar(par[u]);
       }
       void Union(int u, int v){
          int ulp_u = findUPar(u), ulp_v = findUPar(v);
          if(ulp_u == ulp_v) return;
          if(rank[ulp_u] < rank[ulp_v]) par[ulp_u] = ulp_v;
          else if(rank[ulp_u] > rank[ulp_v]) par[ulp_v] = ulp_u;
          else {
              par[ulp_u] = ulp_v;
              rank[ulp_v]++;
          }
       }
};
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    string s;
    for(int i=0;i<n;i++) cin >> v[i];
    cin >> s;
    Dsu ds(n);
    for(int i=0;i<n;i++) ds.Union(i+1, v[i]);
    map<int,int> hash;
    vector<int> ans(n+1,0);
    for(int i=1;i<=n;i++){
        int root = ds.findUPar(i);
        if(s[i-1] == '0') hash[root]++;
    }
    for(int i=1;i<=n;i++){
        int root = ds.findUPar(i);
        ans[i] = hash[root];
    }
    for(int i=1;i<=n;i++) cout << ans[i] << " ";
    cout << endl;
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