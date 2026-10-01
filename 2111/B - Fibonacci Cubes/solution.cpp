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
    int n,m;
    cin >> n >> m;
    string ans = "";
    vector<int> fib(n);
    fib[0] = 1;
    fib[1] = 2;
    for(int i=2;i<n;i++) fib[i] = fib[i-1] + fib[i-2];
    while(m--){
        int l,b,h;
        cin >> l >> b >> h;
        bool foo = true;
        for(int i=n-1;i>=0;i--){
            int maxi = max({l,b,h});
            if(fib[i] > l || fib[i] > b || fib[i] > h){
                ans += '0';
                foo = false;
                break;
            }
            else{
                if(maxi == l) l -= fib[i];
                else if(maxi == b) b -= fib[i];
                else h -= fib[i];
            }
        }
        if(foo) ans += '1';
    }
    cout << ans << endl;
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