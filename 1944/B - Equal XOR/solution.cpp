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
    int n, k;
    cin >> n >> k;
    k *= 2;
    vector<int> v(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> v[i];
    map<int, int> m;
    for (int i = 0; i < n; i++) m[v[i]]++;
    vector<int> hsh0, hsh1, hsh2;
    for (int i = 1; i <= n; i++) {
        if (m[i] == 0) hsh0.push_back(i);
        else if (m[i] == 1) hsh1.push_back(i);
        else hsh2.push_back(i);
    }
    vector<int> l, r;
    int sz = 0;
    for (int val : hsh0) {
        if (sz + 2 <= k) {
            r.push_back(val);
            r.push_back(val);
            sz += 2;
        }
    }
    for (int val : hsh1) {
        if (sz + 1 <= k) {
            r.push_back(val);
            sz += 1;
        }
    }
    sz = 0;
    for (int val : hsh2) {
        if (sz + 2 <= k) {
            l.push_back(val);
            l.push_back(val);
            sz += 2;
        }
    }
    for (int val : hsh1) {
        if (sz + 1 <= k) {
            l.push_back(val);
            sz += 1;
        }
    }
    for (int ans : l) cout << ans << ' ';
    cout << '
';
    for (int ans : r) cout << ans << ' ';
    cout << '
';
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