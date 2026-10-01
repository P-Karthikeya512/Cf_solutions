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
    int n,q;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> pre(n,-1);
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1];
        if(v[i]!=v[i-1]){
            pre[i] = i-1;
        }
    }
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        if(pre[y] < x) cout << -1 << " " << -1 << endl;
        else cout << pre[y] + 1 << " " << y + 1 << endl;
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
        cout << "

";
    }
    return 0;
}