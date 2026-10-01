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
    int n,q;
    cin >> n >> q;
    vector<int>v(n),vc;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=1;i<n;i++) v[i] += v[i-1];
    vc = v;
    int x,t=0;
    while(q--){
        cin >> x;
        t+=x;
        if(t>=v[n-1]) t = 0;
        auto it = lower_bound(v.begin(),v.end(),t);
        cout << v.end() - it - (*it==t) << endl;
    }
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