#include <bits/stdc++.h>
using namespace std;
#define int long long
 
const int mod = 1e9 + 7;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int binpow(int base, int exp) {
    int result = 1;
    base %= mod;
    while (exp) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
 
int mod_inv(int a) {
    return binpow(a, mod - 2);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0, sq_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum = (sum + v[i]) % mod;
        sq_sum = (sq_sum + v[i] * v[i] % mod) % mod;
    }
    sum= (sum * sum % mod - sq_sum + mod) % mod;
    sum = sum * mod_inv(2) % mod;
    int nC2 = (((n%mod)*((n-1)%mod)%mod)*mod_inv(2))%mod;
    int res = sum * mod_inv(nC2) % mod;
    cout << res << '
';
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