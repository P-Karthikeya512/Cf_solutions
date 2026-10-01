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
    vector<int> d(n + 1);
    for (int i = 1; i <= n; i++) cin >> d[i];
    vector<int> l(n + 1), r(n + 1);
    for (int i = 1; i <= n; i++) cin >> l[i] >> r[i];
    vector<int> low(n + 1), high(n + 1);
    low[0] = high[0] = 0;
    for (int i = 1; i <= n; i++) {
        int nl = low[i - 1] + (d[i] == 1);
        int nh = high[i - 1] + (d[i] != 0);
        low[i] = max(nl, l[i]);
        high[i] = min(nh, r[i]);
        if (low[i] > high[i]) {
            cout << -1 << '
';
            return;
        }
    }
    vector<int> ans(n + 1), h(n + 1);
    h[n] = low[n];
    for (int i = n; i >= 1; i--) {
        int di;
        if (d[i] != -1) di = d[i];
        else if (h[i] >= low[i - 1] && h[i] <= high[i - 1]) di = 0;
        else di = 1;
        int prev_h = h[i] - di;
        if (prev_h < low[i - 1] || prev_h > high[i - 1]) {
            cout << -1 << '
';
            return;
        }
        ans[i] = di;
        h[i - 1] = prev_h;
    }
    for (int i = 1; i <= n; i++) cout << ans[i] <<  ' ';
    cout << endl;
    d.clear();
    l.clear();
    r.clear();
    ans.clear();
    h.clear();
    low.clear();
    high.clear();
    return;
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}