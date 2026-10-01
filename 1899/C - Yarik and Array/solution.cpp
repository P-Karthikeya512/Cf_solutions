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
    vector<int> v(n), dp(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int maxi = v[0];
    dp[0] = v[0];
    for(int i=1;i<n;i++){
        if((((v[i]%2) + 2)%2) != (((v[i-1]%2) + 2)%2)){
           dp[i] = max(v[i], dp[i-1] + v[i]);
        }
        else  dp[i] = v[i];
        maxi = max(maxi, dp[i]);
    }
    cout << maxi << endl;
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