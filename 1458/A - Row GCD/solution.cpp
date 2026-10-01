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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int j = 0; j < m; j++) cin >> b[j];
    int g = 0;
    if (n >= 2) {
        g = a[1] - a[0];
        for (int i = 2; i < n; i++) {
            int next = a[i] - a[0];
            g = gcd(g, next);
        }
    }
    for (int i : b) cout << gcd(a[0] + i, g) << ' ';
    cout << '
';
    return ;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}