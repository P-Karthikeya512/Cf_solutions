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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    if(n == 2){
        if(abs(v[0] - v[1]) > 1) cout << -1 << endl;
        else cout << 0 << endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i] - v[i-1] == 0 || v[i] - v[i-1] == -1 || v[i] - v[i-1] == 1){
            cout << 0 << endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        int l = min(v[i],v[i+1]);
        int r = max(v[i],v[i+1]);
        if(i >= 1){
            if(l <= v[i-1]+1 && r >= v[i-1]-1){
                cout << 1 << endl;
                return;
            }
        }
        if(i+2 < n){
            if(l <= v[i+2]+1 && r >= v[i+2]-1){
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
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