#include <bits/stdc++.h>
using namespace std;
#define int long long
 
vector<int> primes;
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
}
 
void sieve() {
    const int LIMIT = 1000000;
    vector<char> isPrime(LIMIT + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int p = 2; p * p <= LIMIT; p++) {
        if (isPrime[p]) {
            for (int q = p * p; q <= LIMIT; q += p)
                isPrime[q] = false;
        }
    }
    for (int p = 2; p <= LIMIT; p++) {
        if (isPrime[p]) primes.push_back(p);
    }
}
 
int gcdll(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int g = v[0];
    for (int i = 1; i < n; i++) g = gcdll(g, abs(v[i]));
    if (g == 1) {
        cout << 2 << '
';
        return;
    }
    for (int p : primes) {
        if (g % p != 0) {
            cout << p << '
';
            return;
        }
    }
    cout << -1 << '
';
    return;
}
 
int32_t main() {
    fastio();
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}