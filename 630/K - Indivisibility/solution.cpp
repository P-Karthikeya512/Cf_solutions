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
    int ans = n;
    ans -= ((n/2) + (n/3) + (n/5) + (n/7));
    ans += ((n/6) + (n/10) + (n/14) + (n/15) + (n/21) + (n/35));
    ans -= ((n/30) + (n/42) + (n/70) + (n/105));
    ans += (n/210);
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