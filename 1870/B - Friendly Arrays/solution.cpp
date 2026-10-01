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
    int n,m;
    cin >> n >> m;
    vector<int>v(n),a(m);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<m;i++) cin >> a[i];
    int pos_or = a[0];
    for(int i=1;i<m;i++) pos_or |= a[i];
    int mn = v[0], mx = (pos_or|v[0]);
    for(int i=1;i<n;i++){
        mn ^= v[i];
        mx ^=(pos_or|v[i]);
    }
    cout << min(mn,mx) << " " << max(mn,mx) << endl;
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