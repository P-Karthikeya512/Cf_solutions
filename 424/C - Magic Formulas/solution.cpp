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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    v.push_back(0);
    vector<int> inter(2e6 + 1);
    inter[0] = 0;
    for (int i = 1; i < inter.size(); i++) {
        inter[i] = i ^ inter[i - 1];
    }
    int ans = v[0];
    for (int i = 1; i <= n; i++) {
        ans ^= v[i];
        ans ^= inter[n % i];
        int od = n / i;
        if (od & 1) ans ^= inter[i - 1];
    }
    cout << ans << endl;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}