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
    vector<int> store(1001, -1);
    for(int i=0;i<n;i++){
        cin >> v[i];
        store[v[i]] = max(store[v[i]], i+1);
    }
    int ans = -1;
    for(int i=1;i<=1000;i++){
        if(store[i] == -1) continue;
        for(int j=1;j<=1000;j++){
            if(store[j] == -1) continue;
            if(__gcd(i,j) == 1) ans = max(ans, store[i] + store[j]);
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