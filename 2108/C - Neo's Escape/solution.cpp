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
    vector<int> v;
    v.push_back(-1);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (v.back() != x) v.push_back(x);
    }
    v.push_back(-1);
    int ans = 0;
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i-1] < v[i] && v[i] > v[i+1]) ans++;
    }
    cout << ans << endl;
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