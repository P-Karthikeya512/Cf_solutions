#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int mod = 998244353;
 
void solve()
{
    int n,i=0;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    vector<int> dp(4);
    dp[0] = 0;
    while(i<n){
        if(v[i]==1) dp[1] = (dp[1]%mod + 1)%mod;
        else if(v[i]==2) dp[2] = ((dp[2]%mod)%mod+(dp[1]%mod)+(dp[2]%mod))%mod;
        else dp[3] = ((dp[3]%mod)+(dp[2]%mod))%mod;
        i++;
    }
    cout << dp[3] << endl;
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