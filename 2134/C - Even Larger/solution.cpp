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
    vector<int> v(n, 0);
    for(int i=0;i<n;i++) cin >> v[i];
    int ans = 0ll;
    for(int i=1;i<n;i+=2){
        if(i == n-1){
            if(v[i] < v[i-1]) ans += abs(v[i-1] - v[i]);
            continue;
        }
        if(v[i] < v[i+1]){
            ans += abs(v[i+1] - v[i]);
            v[i+1] = v[i];
        }
        if(v[i] < v[i-1]){
            ans += abs(v[i-1] - v[i]);
            v[i-1] = v[i];
        }
        if(v[i+1] + v[i-1]  > v[i]){
            ans += abs((v[i+1] + v[i-1]) - v[i]);
            v[i+1] -= abs((v[i+1] + v[i-1]) - v[i]);
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