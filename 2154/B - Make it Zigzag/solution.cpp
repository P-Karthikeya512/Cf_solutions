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
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> pre(n);
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = max(pre[i-1], v[i]);
    int ans = 0;
    if(n == 2){
        if(v[1] <= v[0]) cout << 1 << endl;
        else cout << 0 << endl;
        return ;
    }
    for(int i=1;i<n-1;i+=2){
        if(v[i] > v[i-1] && v[i] > v[i+1]) continue;
        v[i] = pre[i];
        if(v[i-1] >= v[i]) {
            ans += v[i-1] - v[i] + 1;
            v[i-1] = v[i] - 1;
        }
        if(v[i+1] >= v[i]) {
            ans += v[i+1] - v[i] + 1;
            v[i+1] = v[i] - 1;
        }
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