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
    vector<int> v(n+1), ans(n+1);
    for(int i=1;i<=n;i++) cin >> v[i];
    int last = 0, prev = 0;
    int curr = 0;
    for(int i=1;i<=n;i++){
        int diff = v[i] - prev;
        prev = v[i];
        last = i - diff;
        if(last <= 0){
            curr++;
            ans[i] = curr;
        }
        else ans[i] = ans[last];
    }
    for(int i=1;i<=n;i++) cout << ans[i] << " ";
    cout << endl;
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