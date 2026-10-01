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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.rbegin(), v.rend());
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += (v[i] * max(m, 0ll));
        m--;
    }
    cout << ans << endl;
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