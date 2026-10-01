#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int count(int x){
    int ans = x;
    ans -= ((x/2) + (x/3) + (x/5) + (x/7));
    ans += ((x/6) + (x/10) + (x/14) + (x/15) + (x/21) + (x/35));
    ans -= ((x/30) + (x/42) + (x/70) + (x/105));
    ans += ((x/210));
    return ans;
}
 
void solve()
{
    int l, r;
    cin >> l >> r;
    cout << count(r) - count(l-1) << endl;
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