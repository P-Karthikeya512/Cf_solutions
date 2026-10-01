#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define rep(i,a,b) for(int i=a;i<b;i++)
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> pos(k + 1);
    rep(i, 1, n + 1) {
        int x;
        cin >> x;
        pos[x].push_back(i);
    }
    int l = 0, r = n, ans = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        bool can = false;
        for(int i=1;i<=k;i++){
            vector<int> v;
            v.push_back(0);
            for(auto x : pos[i]) v.push_back(x);
            v.push_back(n+1);
            int cnt = 0, gap = 0;
            for(int i=1;i<v.size();i++){
                int curr = v[i] - v[i-1] - 1;
                if(curr > mid){
                    cnt++;
                    gap = curr;
                }
                if(cnt > 1) break;
            }
            if(cnt == 0 || (cnt == 1 && gap <= 2 * mid + 1)){
                can = true;
                break;
            }
        }
        if(can) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    cout << ans << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solve();
 
    return 0;
}