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
    int a, b;
    cin >> a >> b;
    if(a == b) cout << 0 << endl;
    else if(a % b == 0 || b % a == 0) cout << 1 << endl;
    else cout << 2 << endl;
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