#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
const int mod = 1e9 + 7;
 
void solve()
{
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<int> f(6);
    x = (x + mod) % mod;
    y = (y + mod) % mod;
    f[0] = x;f[1] = y;
    for(int i=2;i<6;i++){
        f[i] = ((f[i-1] % mod) - (f[i-2]%mod) + mod)%mod;
    }
    n = (n-1) % 6;
    cout << f[n] << endl;
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