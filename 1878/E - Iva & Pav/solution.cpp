#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
const int N = 2e5 + 3, bit = 30;
int pref[N][bit + 1];
 
void prefi(int n, const vector<int> &v) {
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= bit; j++){
            pref[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= bit; j++) {
            if (v[i] & (1 << j))  pref[i + 1][j] = pref[i][j] + 1;
            else  pref[i + 1][j] = pref[i][j];
        }
    }
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    prefi(n, v);
    int q;
    cin >> q;
    while (q--) {
        int l, k;
        cin >> l >> k;
        l--;
        if (v[l] < k) {
            cout << -1 << " ";
            continue;
        }
        int lo = l, hi = n - 1, ans = -1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int num = 0;
            for (int j = 0; j <= bit; j++) {
                if (pref[mid + 1][j] - pref[l][j] == mid - l + 1) num |= (1 << j);
            }
            if (num >= k) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans + 1 << " ";
    }
    cout << "
";
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