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
    int sum = 0;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(),v.end());
    int taken = 0, ans = 0;
    for(int i=n-1;i>=0;i--){
        taken += v[i];
        ans++;
        if(sum - taken < taken) break;
    }
    cout << ans << endl;
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