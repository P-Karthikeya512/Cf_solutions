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
    int a, b;
    cin >> a >> b;
    int rem1 = a%2, rem2 = b%2;
    if(rem1 == rem2){
        if(rem1) cout << (a * b * 1ll) + 1ll << endl;
        else cout << (a * (b / 2)) + 2ll << endl;
        return;
    }
    if(rem2 == 1) cout << -1 << endl;
    else{
        int ans = (a * (b / 2)) + 2ll;
        if(ans % 2) cout << -1 << endl;
        else cout << ans << endl;
    }
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