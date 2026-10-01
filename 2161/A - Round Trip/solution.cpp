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
    int r, x, d, n;
    cin >> r >> x >> d >> n;
    string s;
    cin >> s;
    int ans = 0;
    int L = r, R = r;
    for (char c : s) {
        if (c == '1') {
            ans++;
            L = max(0, L - d);
            R = R + d;
        } else {
            if (L >= x) continue;
            ans++;
            int newL = max(0, L - d);
            int newR = min(R, x - 1) + d;
            L = newL;
            R = newR;
        }
    }
    cout << ans << "
";
return ;
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