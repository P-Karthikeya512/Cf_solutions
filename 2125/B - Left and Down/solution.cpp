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
    int a, b, k;
    cin >> a >> b >> k;
    int g = gcd(a,b);
    if(max(a/g, b/g) <= k) cout << 1 << endl;
    else cout << 2 << endl;
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