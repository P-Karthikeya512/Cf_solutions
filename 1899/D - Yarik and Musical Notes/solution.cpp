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
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int ans = 0;
    map<int,int>m;
    for(auto i : v) m[i]++;
    for(int i=0;i<n;i++){
        ans += m[v[i]]-1;
        m[v[i]]--;
        if(v[i]==1) ans += m[2];
        else if(v[i]==2) ans += m[1];
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