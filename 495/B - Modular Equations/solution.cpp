#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
void solve() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "infinity
";
        return;
    }
    if (a < b) {
        cout << 0 << "
";
        return;
    }
    int diff = a - b;
    int cnt = 0;
    for (int i = 1; i * i <= diff; ++i) {
        if (diff % i == 0) {
            int d1 = i;
            int d2 = diff / i;
            if (d1 > b) ++cnt;
            if (d2 != d1 && d2 > b) ++cnt;
        }
    }
    cout << cnt << "
";
    return;
}
 
int32_t main() {
    fastio();
    solve();
    return 0;
}