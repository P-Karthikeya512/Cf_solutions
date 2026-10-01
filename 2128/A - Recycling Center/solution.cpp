#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> deadlines;
    for (int i = 0; i < n; i++) {
        if (v[i] > c) continue;
        int x = c / v[i];
        int key = 0;
        while ((1LL << (key + 1)) <= x) key++;
        deadlines.push_back(key);
    }
    sort(deadlines.begin(), deadlines.end());
    int cur_time = 0, done = 0;
    for (int d : deadlines) {
        if (cur_time <= d) {
            done++;
            cur_time++;
        }
    }
    cout << n - done << "
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