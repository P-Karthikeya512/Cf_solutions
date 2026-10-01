#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int maxSubarraySum(const vector<int>& v) {
    int maxi = LLONG_MIN, curr = 0;
    for (int i : v) {
        curr = max(curr + i, i);
        maxi = max(maxi, curr);
    }
    return maxi;
}
 
void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            v[i] = -1e13;
            pos = i;
        }
    }
    int mx = 0, cur = 0;
    for (int i = 0; i < n; i++) {
        cur = max(cur + v[i], v[i]);
        mx = max(mx, cur);
    }
    if (mx > k || (mx != k && pos == -1)) {
        cout << "No
";
        return;
    }
    if (pos != -1) {
        int l = 0, r = 0;
        cur = 0;
        for (int i = pos + 1; i < n; i++) {
            cur += v[i];
            l = max(l, cur);
        }
        cur = 0;
        for (int i = pos - 1; i >= 0; i--) {
            cur += v[i];
            r = max(r, cur);
        }
        v[pos] = k - l - r;
    }
    cout << "Yes
";
    for (int i : v) cout << i << " ";
    cout << "
";
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