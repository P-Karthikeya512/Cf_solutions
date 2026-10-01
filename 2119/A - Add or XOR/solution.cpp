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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a > b){
        if(a & 1){
            if(b == a - 1) cout << y << endl;
            else cout << -1 << endl;
        }
        else cout << -1 << endl;
        return;
    }
    int diff = b - a;
    int mini = (b - a) * x;
    if(diff % 2 == 0) mini = min(((diff / 2) * x) + ((diff / 2) * y), mini);
    else{
        if(a & 1) mini = min(((diff/2) + 1)*x + ((diff/2)*y), mini);
        else mini = min(((diff/2)*x)+((diff/2)+1)*y, mini);
    }
    cout << mini << endl;
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