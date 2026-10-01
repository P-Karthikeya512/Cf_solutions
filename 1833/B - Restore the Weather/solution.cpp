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
    vector<int>b(n);
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i;
    }
    for(int i=0;i<n;i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    vector<int> ans(n);
    for(int i=0;i<n;i++) ans[a[i].second] = b[i];
    for(int i=0;i<n;i++) cout << ans[i] << " ";
    cout << endl;
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