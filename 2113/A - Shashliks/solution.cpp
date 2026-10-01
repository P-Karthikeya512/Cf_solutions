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
    int k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    int t1 = 0, t2 = 0;
    if (k >= a) t1 = (k - a) / x + 1;
    int r1 = k - t1 * x;
    int m2 = (r1 >= b) ? (r1 - b) / y + 1 : 0;
    int z1 = t1 + m2;
    if (k >= b) t2 = (k - b) / y + 1;
    int r2 = k - t2 * y;
    int m1 = (r2 >= a) ? (r2 - a) / x + 1 : 0;
    int z2 = t2 + m1;
    cout << max(z1, z2) << '
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