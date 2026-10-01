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
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    int cost = 0;
    int res = 1e18;
    for(int i=n-1;i>=0;i--){
        if(i <= m-1){
            res = min(res,cost+a[i]);
        }
        cost += min(b[i],a[i]);
    }
    cout << res << endl;
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