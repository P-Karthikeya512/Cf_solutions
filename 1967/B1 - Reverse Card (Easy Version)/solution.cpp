#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    long long ans = 0;
    for (int i = 1; i <= m; i++){
        for(int j = i;j<=n;j+=i){
            int sum = i + j;
            int pro = i*i;
            if(sum%pro == 0) ans++;
        }
    }
    cout << ans << '
';
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}