#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, k;
    cin >> n >> k;
    vi factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    if (factors.size() < k) {
        cout << -1 << '
';
        return;
    }
    while (factors.size() > k) {
        int x = factors.back();
        factors.pop_back();
        factors.back() *= x;
    }
 
    for (int f : factors) {
        cout << f << " ";
    }
    cout << '
';
}
 
int32_t main() {
    fastio();
    solve();
    return 0;
}