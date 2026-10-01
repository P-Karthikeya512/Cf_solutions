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
    int a,x,y;
    cin >> a >> x >> y;
    if(x > y) swap(x,y);
    if((a < x && a < y) || (a > x && a > y)) cout << "YES
";
    else cout << "NO
";
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