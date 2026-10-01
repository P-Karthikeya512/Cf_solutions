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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i] >> b[i];
    int pt = 0, ps = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int diff = a[i] - pt;
        if ((ps ^ (diff % 2)) == b[i]) ans += diff;
        else  ans += diff - 1;
        ps = b[i];
        pt = a[i];
    }
    cout << ans + (m - pt) << endl;
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