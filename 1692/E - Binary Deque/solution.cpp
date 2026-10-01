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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int sum = 0;
    map<int,int> mp;
    mp[0] = -1;
    int len = -1;
    for(int i=0;i<n;i++){
        sum += v[i];
        if(mp.count(sum - k)) len = max(len, i - mp[sum - k]);
        if(!mp.count(sum)) mp[sum] = i;
    }
    if(len == -1) cout << -1 << endl;
    else cout << n - len << endl;
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