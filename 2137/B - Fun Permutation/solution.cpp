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
    vector<int> v(n), ans(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> mp(n+1);
    for(int i=0;i<n;i++){
        int pq = v[i] % (n + 1);
        mp[pq] = v[i];
    }
    for(int i=0;i<n;i++){
        int pq = v[i] % (n+1);
        int idx = ((n+1) - pq) % (n+1);
        cout << mp[idx] << " ";
    }
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