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
    int n, k;
    cin >> n >> k;
    vector<int> v(n), c(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
        c[i] = v[i] % (k+1);
    }
    for(int i=0;i<n;i++) cout << (k * c[i]) + v[i] << " ";
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