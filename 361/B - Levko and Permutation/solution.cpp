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
    if(k >= n) {
        cout << -1 << endl;
        return;
    }
    cout << n - k << " ";
    for(int i=1;i<n-k;i++) cout << i << " ";
    for(int i = n-k+1; i<=n;i++) cout << i << " ";
    cout << endl;
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