#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> selected(x);
    for (int i = 0; i < x; i++) cin >> selected[i];
    sort(selected.begin(), selected.end());
    int ans = 0;
    for (int i = 1; i < x; i++) {
        if (selected[i] - selected[i - 1] == 2) ans++;
    }
    if ((selected[0] + n - selected[x - 1]) % n == 2) ans++;
    cout << ans + x - 2 << '
';
    return ;
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