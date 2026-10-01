#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int pop(int x) {
    return __builtin_popcountll(x);
}
 
vector<int> upg(int x) {
    vector<int> res;
    int cur = x;
    for (int b = 0; b < 61; ++b) {
        if ((cur & (1LL << b)) == 0) {
            int nxt = cur | (1LL << b);
            int cost = nxt - cur;
            if (pop(nxt) > pop(cur)) {
                res.push_back(cost);
                cur = nxt;
            }
        }
    }
    return res;
}
 
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
    cin >> n >> k;
    vector<int> a(n), all;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ans += pop(a[i]);
        vector<int> tmp = upg(a[i]);
        all.insert(all.end(), tmp.begin(), tmp.end());
    }
    sort(all.begin(), all.end());
    for (int c : all) {
        if (k >= c) {
            ans++;
            k -= c;
        } else break;
    }
    cout << ans << '
';
    }
    return 0;
}