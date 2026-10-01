#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        vector<int> v(m);
        for (int &x : v) cin >> x;
        sort(v.begin(), v.end());
        int maxRescue = abs(a - b) - 1;
        int lo = 0, hi = min(m, maxRescue), ans = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int adv    = abs(a - b);
            int border = (a < b ? a - 1 : n - a);
            int timer  = adv + border;
            bool can = true;
            for (int i = 0; i < mid; ++i) {
                int pos = v[mid - 1 - i];
                if (pos >= timer) {
                    can = false;
                    break;
                }
                timer--;
            }
            if (can) {
                ans = mid;
                lo  = mid + 1;
            } else {
                hi  = mid - 1;
            }
        }
        cout << ans << "
";
    }
    return 0;
}