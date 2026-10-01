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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin >> v[i];
    int cnt = 0, res = 0;
    for(int i=0;i<k;i++){
        if(v[i] < (2ll*v[i+1])) cnt++;
    }
    if(cnt == k) res++;
    for(int i=1;i+k<n;i++){
        if(v[i-1] < (2ll*v[i])) cnt--;
        if(v[i + k - 1] < (2ll*v[i + k])) cnt++;
        if(cnt == k) res++;
    }
    cout << res << endl;
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