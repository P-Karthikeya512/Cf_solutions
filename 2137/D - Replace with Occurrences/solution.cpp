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
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];
    unordered_map<int, vector<int>> groups;
    for (int i = 0; i < n; i++) {
        groups[b[i]].push_back(i);
    }
    vector<int> a(n, -1);
    int current_label = 1;
    for (auto &[freq, indices] : groups) {
        if (indices.size() % freq != 0) {
            cout << -1 << "
";
            return;
        }
        for (int i = 0; i < indices.size(); i += freq) {
            for (int j = 0; j < freq; j++) {
                a[indices[i + j]] = current_label;
            }
            current_label++;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "
";
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