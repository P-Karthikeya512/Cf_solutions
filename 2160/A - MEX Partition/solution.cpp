#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> mex(v[n - 1] + 2, 0);
    for (int x : v) {
        if (x >= 0 && x < mex.size())
            mex[x]++;
    }
    int ans = 0;
    for (int i = 0; i < mex.size(); i++) {
        if (mex[i] == 0) {
            ans = i;
            break;
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