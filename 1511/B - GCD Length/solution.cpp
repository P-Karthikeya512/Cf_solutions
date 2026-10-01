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
    int a, b, c;
    cin >> a >> b >> c;
    int p1, p2;
    p1 = pow(10, a-1), p2 = pow(10,b-1);
    if(c != min(a, b)) p1 += pow(10,c-1);
    cout << p1 << " " << p2 << endl;
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