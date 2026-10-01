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
    int n,c,b;
    cin >> n >> b >> c;
    if(b == 0){
        if(c >= n) cout << n << endl;
        else if(c >= n-2) cout << n-1 << endl;
        else cout << -1 << endl;
    }
    else{
        if(c >= n) cout << n << '
';
        else cout << n - max(0LL,1 + (n - c - 1)/b) << endl;
    }
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