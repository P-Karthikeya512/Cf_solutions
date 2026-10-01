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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int si = -1, ei = -1;
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            si = i;
            break;
        }
    }
    if (si == -1) {
        cout << "YES
";
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (v[i]) {
            ei = i;
            break;
        }
    }
    if (abs(si - ei) < k) cout << "YES
";
    else cout << "NO
";
}
 
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}