#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n,ans = 0;
    cin >> n;
    int x;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin >> x;
        int flipped = ((1 << 31) - 1) ^ x;
        if(!m[x]){
            ans++;
            m[flipped]++;
        }else m[x]--;
    }
    cout << ans << endl;
    return;
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}