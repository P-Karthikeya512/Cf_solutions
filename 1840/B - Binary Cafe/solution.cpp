#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    unsigned long long n, k;
    cin >> n >> k;
    if (n == 0) {
        cout << 1 << '
';
        return;
    }
    unsigned bits = 64 - __builtin_clzll(n);
    if (k >= 63) {
        cout << n + 1ULL << '
';
        return;
    }
    if (bits <= k) cout << n + 1ULL << '
';
    else cout << (1ULL << k) << '
';
    return;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}