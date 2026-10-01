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
    int n, q, k;
    cin >> n >> k >> q;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int l = 0, len = 0, ans = 0;
    for(int r=0;r<n;r++){
        if(v[r] > q){
            l = r+1;
            continue;
        }
        len = r - l + 1;
        if(len >= k) ans += (len - k + 1);
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