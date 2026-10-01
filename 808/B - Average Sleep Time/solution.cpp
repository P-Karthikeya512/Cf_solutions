#include <bits/stdc++.h>
using namespace std;
#define double long double
 
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
    double total_sum = 0.0;
    double curr_sum = 0.0;
    for (int i = 0; i < k; i++) curr_sum += v[i];
    total_sum += curr_sum;
    for (int i = 1; i <= n - k; i++) {
        curr_sum -= v[i - 1];
        curr_sum += v[i + k - 1];
        total_sum += curr_sum;
    }
    double windows = n - k + 1;
    cout << fixed << setprecision(10) << (total_sum / windows) << '
';
    return;
}
 
int32_t main()
{
    fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}