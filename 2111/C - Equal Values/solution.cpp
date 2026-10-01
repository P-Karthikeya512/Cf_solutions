#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int &x : v) cin >> x;
    long long ans = LLONG_MAX;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && v[j] == v[i]) j++;
        long long cost = (long long)(i + (n - j)) * v[i];
        ans = min(ans, cost);
        i = j;
    }
    cout << ans << "
";
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}