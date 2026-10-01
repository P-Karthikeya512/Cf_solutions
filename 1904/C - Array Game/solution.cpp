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
    for(int i=0;i<n;i++) cin >> v[i];
    if(k >= 3){
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int diff = v[0];
    for(int i=0;i<n-1;i++) diff = min(diff, v[i+1] - v[i]);
    if(k == 1){
        cout << diff << endl;
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int a = v[i] - v[j];
            int id = lower_bound(v.begin(), v.end(), a) - v.begin();
            if(id < n) diff = min(diff, v[id] - a);
            if(id > 0) diff = min(diff, a - v[id - 1]);
        }
    }
    cout << diff << endl;
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