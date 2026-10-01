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
    int a,b;
    cin >> a >> b;
    int pxor;
    if(a%4 == 1) pxor = a-1;
    else if(a%4 == 2) pxor = 1;
    else if(a%4 == 3) pxor = a;
    else pxor = 0;
    if(pxor == b) cout << a << endl;
    else if((pxor ^ b)!= a) cout << a + 1 << endl;
    else cout << a + 2 << endl;
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