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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    vector<pair<int, int>> v;
    for (int op = 0; op < n; op++) {
        for (int i = 0; i + 1 < n; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                v.push_back({1, i + 1});
            }
        }
    }
    for (int op = 0; op < n; op++) {
        for (int i = 0; i + 1 < n; i++) {
            if (b[i] > b[i + 1]) {
                swap(b[i], b[i + 1]);
                v.push_back({2, i + 1});
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            swap(a[i], b[i]);
            v.push_back({3, i + 1});
        }
    }
    cout << v.size() << "
";
    for (auto it : v) {
        cout << it.first << " " << it.second << "
";
    }
    return;
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}