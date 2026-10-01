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
    vector<int> a(n+1),b(n+1),c(n+1),ans;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];
    int mx = LLONG_MIN;
    for(int i=1;i<=n;i++){
        mx = max(mx,a[i]-b[i]);
        c[i] = a[i] - b[i];
    }
    for(int i=1;i<=n;i++){
        if(c[i] == mx) ans.push_back(i);
    }
    cout << ans.size() << '
';
    for(auto i : ans) cout << i << " ";
    cout << '
';
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