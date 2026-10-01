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
    int n, k;
    cin >> n >> k;
    if (k % 2 == 1) {
        cout << "No
";
        return;
    }
    int range = (n % 2 == 0) ? (n * n) / 2 : (n * n - 1) / 2;
    if (k > range) {
        cout << "No
";
        return;
    }
    cout << "Yes
";
    vector<int> ans(n);
    for (int i = 0; i < n; i++) ans[i] = i + 1;
    int j = 0, m = n;
    while (k > 2 * (m - 1)) {
        swap(ans[j], ans[n - j - 1]);
        k -= 2 * (m - 1);
        m -= 2;
        j++;
    }
    k /= 2;
    if (j + k < n) swap(ans[j], ans[j + k]);
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << "
";
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}