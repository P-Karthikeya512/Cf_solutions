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
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++) cin >> v[i].first;
    for(int i=0;i<n;i++) cin >> v[i].second;
    for(int i=0;i<n;i++){
        if(v[i].second < v[i].first) swap(v[i].first, v[i].second);
    }
    int ans = 0, mi = INT_MAX;
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++){
        ans += abs(v[i].second - v[i].first);
    }
    for(int i=0;i<n-1;i++){
        if(v[i].second >= v[i+1].first){
            cout << ans << endl;
            return;
        }
        mi = min(mi, v[i+1].first - v[i].second);
    }
    cout << ans + (2 * mi) << endl;
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