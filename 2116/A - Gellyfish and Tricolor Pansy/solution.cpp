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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(min(a,c) >= min(b,d)) cout << "Gellyfish
";
    else cout << "Flower
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