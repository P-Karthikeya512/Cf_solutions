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
    vector<int> v(n), odd;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] % 2) odd.push_back(v[i]);
    }
    if(odd.empty()){
        cout << 0 << endl;
        return;
    }
    sort(odd.rbegin(), odd.rend());
    int sum = 0, sz = (odd.size() + 1) / 2;
    for(int i=0;i<n;i++){
        if(v[i] % 2 == 0) sum += v[i];
    }
    for(int i=0;i<sz;i++) sum += odd[i];
    cout << sum << endl;
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