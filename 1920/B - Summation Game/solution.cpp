#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin() + 1, v.end(), greater<int>());
    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];
    int ans = LLONG_MIN;
    for (int i = 0; i <= k; i++) {
        int idx = min(i + x, n);
        int cur = v[n] - 2 * v[idx] + v[i];
        ans = max(ans, cur);
    }
    cout << ans << "
";
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