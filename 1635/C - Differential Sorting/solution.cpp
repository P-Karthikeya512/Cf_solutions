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
    for(int i=0;i<n;i++) cin >> v[i];
    if(v[n-2] > v[n-1]){
        cout << -1 << endl;
        return;
    }
    if(v[n-1] >= 0){
        cout << n-2 << endl;
        for(int i=0;i<n-2;i++) cout << i+1 << " " << n-1 << " " << n << endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(v[i-1] > v[i]){
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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