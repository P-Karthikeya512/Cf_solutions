#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int p = 0;
        for (p = 1; p <= n; p++) {
            if (a[p] >= x) break;
        }
        int res = 0;
        if (p == n && a[p] >= x) res = 1;
        else if (p == n && a[p] < x) res = 0;
        else res = (n - p) + 1;
        bool found = false;
        int mini = a[p - 1], num = 1;
        for (int i = p - 2; i > 0; i--) {
            if (a[i] <= a[i + 1]) {
                mini = a[i];
                num++;
            }
            if (num * mini >= x) {
                res++;
                num = 0;
            }
        }
        cout << res << endl;
    }
    return 0;
}