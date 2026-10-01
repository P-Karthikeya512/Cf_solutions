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
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(n <= k) cout << v[n-1] << endl;
    else{
        for(int i=0;i<n-k;i++){
            v[n-1] = max(v[n-1],v[i]+v[2*(n-k) - 1 - i]);
        }
        cout << v[n-1] << endl;
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