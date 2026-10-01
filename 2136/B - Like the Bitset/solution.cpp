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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int len = 0, maxi = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            len++;
            maxi = max(maxi, len);
            if (maxi >= k) {
                cout << "NO
";
                return;
            }
        } else len = 0;
    }
    cout << "YES
";
    vector<int> ans(n);
    int curr = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ans[i] = curr;
            curr++;
        }
    }
    int zeroVal = n;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ans[i] = zeroVal;
            zeroVal--;
        }
    }
    for (int i : ans) cout << i << " ";
    cout << "
";
    return;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}