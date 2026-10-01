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
    int ans = 0;
    for(int i=0;i<n;i++) cin >> v[i];
    int s = INT_MAX, t = INT_MAX;
    for(int i=0;i<n;i++){
        if(s > t) swap(s, t);
        if(v[i] <= s) s = v[i];
        else if(v[i] <= t) t = v[i];
        else {
            ans++;
            s = v[i];
 
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