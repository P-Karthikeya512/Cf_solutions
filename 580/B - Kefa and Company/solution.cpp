#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, d;
    cin >> n >> d;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int j = 0;
    long long sum = 0, ans = -1;
    for(int i=0;i<n;i++){
        while(j<n && abs(v[i].first-v[j].first) < d){
            sum += v[j].second;
            j++;
        }
        ans = max(sum,ans);
        sum -= v[i].second;
    }
    cout << ans << "
";
}
 
int32_t main() {
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}