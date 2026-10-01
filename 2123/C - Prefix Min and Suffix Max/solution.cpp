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
    vector<int> pre(n), suf(n);
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = min(pre[i-1],v[i]);
    suf[n-1] = v[n-1];
    for(int i=n-2;i>=0;i--) suf[i] = max(suf[i+1],v[i]);
    string ans = "";
    for(int i=0;i<n;i++){
        if(v[i] == pre[i] || v[i] == suf[i]) ans += '1';
        else ans += '0';
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