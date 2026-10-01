#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    if ((a[0] + a[n - 1]) % 2 == 0) {
        cout << 0 << endl;
        return ;
    }
    int ef = -1, el = -1;
    int of = -1, ol = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (ef == -1) ef = i;
            el = i;
        } else {
            if (of == -1) of = i;
            ol = i;
        }
    }
    int rem_even = ef + (n - 1 - el);
    int rem_odd = of + (n - 1 - ol);
    cout << min(rem_even, rem_odd) << endl;
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