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
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    if(a == b){
        cout << 1 << endl;
        return;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] > b[i]) ans += a[i] - b[i];
    }
    cout << ans + 1 << endl;
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