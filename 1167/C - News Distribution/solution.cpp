#include <bits/stdc++.h>
using namespace std;
 
class Dsu{
public:
    vector<int> par, size;
    
    Dsu(int n){
        par.resize(n + 1);
        size.assign(n + 1, 1);
        for(int i = 0; i <= n; i++) par[i] = i;
    }  
    
    int findUpar(int x){
        if(x == par[x]) return x;
        return par[x] = findUpar(par[x]);
    }
    
    void unite(int u, int v){
        int ulp_u = findUpar(u), ulp_v = findUpar(v);
        if(ulp_u == ulp_v) return;
        if(size[ulp_u] < size[ulp_v]){
            par[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else{
            par[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Dsu ds(n);
        for(int i = 0; i < m; i++){
            int k;
            cin >> k;
            vector<int> curr(k);
            for(int j = 0; j < k; j++) cin >> curr[j];
            if(k <= 1) continue;
            for(int j = 1; j < k; j++) ds.unite(curr[j], curr[j - 1]); 
        }
        for(int i = 1; i <= n; i++){
            int ulp_i = ds.findUpar(i);
            cout << ds.size[ulp_i] << " ";
        }
    }
    return 0;
}