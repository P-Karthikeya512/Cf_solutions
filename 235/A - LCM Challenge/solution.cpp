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
    int n;
    cin >> n;
    if(n <= 2) {
        cout << n << '
';
        return;
    }
    if(n & 1){
        cout << (1LL * n) * (n-1) * (n-2) << endl;
        return;
    }
    if(n % 3 == 0){
        cout << (n - 3) * (n - 1) * (n - 2) * 1LL << endl;
        return;
    }
    cout << n * (n-1) * (n-3) * 1LL << endl;
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