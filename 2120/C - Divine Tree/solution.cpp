#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()
#define pii pair<int,int>
#define vpii vector<pii>
#define str string
#define pb push_back
#define ff first
#define ss second
#define py cout << "YES
"
#define pn cout << "NO
"
#define pm cout << -1 << endl;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define rrep(i,x,y) for(int i=x;i>=y;i--)
#define ct continue
#define br break
#define disp(a) { for (int i = 0; i < a.size(); i++) cout << a[i] << " "; }
#define read(arr) { int n = arr.size(); for (int i = 0; i < n; i++) cin >> arr[i]; }
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    int mini = n;
    int maxi = n * (n + 1) / 2;
    if (m < mini || m > maxi) {
        pm;
        return;
    }
    if (n == 1) {
        cout << "1
";
        return;
    }
    int k = min(n, m - (n - 1));
    int cur_min = k + (n - 1);
    vi parent(n + 1, -1);
    if (m == cur_min) {
        vi seq;
        rep(i, 1, n + 1) {
            if (i != k) seq.pb(i);
        }
        sort(all(seq));
        parent[seq[0]] = k;
        rep(i, 1, seq.size()) {
            parent[seq[i]] = seq[i - 1];
        }
    } else {
        rep(i, 1, n + 1) {
            if (i != k) parent[i] = k;
        }
        int Sstar = k * (2 * n - k + 1) / 2;
        int D = Sstar - m;
        rrep(i, n, 1) {
            if (i == k || D == 0) ct;
            int cap = (i > k ? k - 1 : i - 1);
            if (cap <= 0) ct;
            int del = min(D, cap);
            if (i > k) parent[i] = k - del;
            else parent[i] = i - del;
            D -= del;
        }
    }
    cout << k << '
';
    rep(i, 1, n + 1) {
        if (i == k) ct;
        cout << parent[i] << " " << i << '
';
    }
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}