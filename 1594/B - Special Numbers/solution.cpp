#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
const int mod = 1e9 + 7;
int binpow(int base, int expo){
    int res = 1;
    base %= mod;
    while(expo > 0){
        if(expo & 1) res = ((res%mod) * (base%mod))%mod;
        expo = expo >> 1;
        base = ((base%mod) * (base%mod))%mod;
    }
    return res;
}
 
void solve()
{
    int n,k;
    cin >> n >> k;
    int ans = 0;
    for(int i=0;i<31;i++){
        int po = 1 << i;
        if(k & po){
            ans = ((ans%mod) + (binpow(n,i)%mod))%mod;
        }
    }
    cout << (ans%mod) << endl;
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