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
    int ans = 0, cnt;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cnt = 0;
        cin >> x >> y >> z;
        if(x) cnt++;
        if(y) cnt++;
        if(z) cnt++;
        if(cnt >= 2) ans++;
    }
    cout << ans << endl;
return ;
}
 
int32_t main()
{
    fastio();
    int t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}