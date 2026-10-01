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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> hz(n), vz(m);
    for(int i=0;i<n;i++) cin >> hz[i];
    for(int i=0;i<m;i++) cin >> vz[i];
    cout << n + m << endl;
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