#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    vector<int> odd, eve;
    for (int i : v) {
        if (i % 2) odd.push_back(i);
        else eve.push_back(i);
    }
    if (odd.empty() || eve.empty()) {
        cout << 0 << endl;
        return;
    }
    sort(eve.begin(),eve.end());
    int maxi = *max_element(odd.begin(), odd.end());
    int ans = eve.size();
    for (int x : eve) {
        if (x < maxi) maxi += x;
        else if(x > maxi) {
           ans++;
           break;
        }
    }
    cout << ans << endl;
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