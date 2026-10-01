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
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) c1++;
        else if (v[i] == 2) c2++;
        else if (v[i] == 3) c3++;
        else c4++;
    }
    int ans = c4;
    int min31 = min(c3, c1);
    ans += c3;
    c1 -= min31;
    ans += c2 / 2;
    c2 %= 2;
    if (c2) {
        ans++;
        c1 -= min(2, c1);
    }
    if (c1 > 0) ans += (c1 + 3) / 4;
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