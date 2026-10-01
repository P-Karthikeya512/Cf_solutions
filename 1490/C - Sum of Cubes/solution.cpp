#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define py cout << "YES
"
#define pn cout << "NO
"
#define rep(i, x, y) for (int i = x; i < y; i++)
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
int32_t main() {
    fastio();
    vector<int> cubes;
    for (int i = 1; ; i++) {
        int64_t c = (int64_t)i * i * i;
        if (c > (int64_t)1e18) break;
        cubes.push_back(c);
    }
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int ans = upper_bound(cubes.begin(), cubes.end(), n) - cubes.begin();
        int l = 0, r = ans - 1;
        bool found = false;
        while (l <= r) {
            int s = cubes[l] + cubes[r];
            if (s == n) {
                found = true;
                break;
            }
            else if (s < n) {
                l++;
            }
            else {
                r--;
            }
        }
        if (found) py;
        else pn;
    }
    return 0;
}