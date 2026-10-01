#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define vi vector<int>
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rrep(i,x,y) for(int i=x;i>=y;i--)
 
void solve() {
int n; cin >> n;
vi a(n), b(n);
for (int i = 0; i < n; i++) cin >> a[i];
for (int i = 0; i < n; i++) cin >> b[i];
map<int, int> run_a, run_b;
int cnt = 1;
for (int i = 1; i < n; ++i) {
if (a[i] == a[i - 1]) cnt++;
else cnt = 1;
run_a[a[i]] = max(run_a[a[i]], cnt);
}
run_a[a[0]] = max(run_a[a[0]], 1LL);
cnt = 1;
for (int i = 1; i < n; ++i) {
if (b[i] == b[i - 1]) cnt++;
else cnt = 1;
run_b[b[i]] = max(run_b[b[i]], cnt);
}
run_b[b[0]] = max(run_b[b[0]], 1LL);
int max_run = 0;
for (auto &[x, r1] : run_a) {
max_run = max(max_run, r1 + run_b[x]);
}
for (auto &[x, r2] : run_b) {
max_run = max(max_run, r2 + run_a[x]);
}
cout << max_run << endl;
}
 
int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}