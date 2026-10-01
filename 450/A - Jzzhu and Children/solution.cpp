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
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    int maxi = INT_MIN;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        v[i] = ((v[i] + m - 1) / m);
        maxi = max(maxi,v[i]);
    }
    int last = 0;
    for(int i=0;i<n;i++) if(v[i] == maxi) last = i + 1;
    cout << last << endl;
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