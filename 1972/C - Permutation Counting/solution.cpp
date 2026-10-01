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
    int n,k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    int maxi = v[0];
    for(int i=1;i<n;i++){
        int avl = i*(v[i]-v[i-1]);
        if(avl <= k){
            k -= avl;
            maxi = v[i];
        }
        else{
            maxi += k/i;
            k%=i;
            break;
        }
    }
    int ans = maxi*n - n + 1 + k;
    for(int i=0;i<n;i++) if(v[i]>maxi) ans++;
    if(ans < 0) ans = 0;
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