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
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    double db = (n+2) / 3.0;
    int mn = 1 + ceil(log2f(db));
    cout << mn << endl;
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