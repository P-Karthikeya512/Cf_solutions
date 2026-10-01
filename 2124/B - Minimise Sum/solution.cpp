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
    int n;
    cin >> n;
    vector<int> v(n),m(n),p(n);
    for(int i=0;i<n;i++) cin >> v[i];
    m[0] = p[0] = v[0];
    for(int i=1;i<n;i++){
        m[i] = min(m[i-1],v[i]);
        p[i] = p[i-1] + m[i];
    }
    int ans = p[n-1];
    for(int i=1;i<n-1;i++) ans = min(ans, p[i]);
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