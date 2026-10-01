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
    vector<int>a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++) cin >> b[i];
    for(int i=1;i<n;i++) a[i] += a[i-1];
    for(int i=1;i<m;i++) b[i] += b[i-1];
    int maxa = *max_element(a.begin(),a.end());
    int maxb = *max_element(b.begin(),b.end());
    cout << max({0, maxa}) + max({0,maxb}) << endl;
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