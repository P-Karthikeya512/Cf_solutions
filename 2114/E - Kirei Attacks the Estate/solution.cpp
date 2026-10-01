#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void dfs(ll node, vector<vector<ll>> &graph, vector<ll> &ans, ll neg, ll pos, bool curr, vector<ll> &v, vector<bool> &vis) {
    vis[node] = true;
    if (curr) {
        pos += v[node];
        neg -= v[node];
    }
    else {
        pos -= v[node];
        neg += v[node];
    }
    if (neg < 0) neg = 0;
    if (pos < 0) pos = 0;
    if (curr)  ans[node] = max(ans[node], pos);
    else  ans[node] = max(ans[node], neg);
    for (auto &it : graph[node]) {
        if (!vis[it]) {
            dfs(it, graph, ans, neg, pos, !curr, v, vis);
        }
    }
}
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v) cin >> it;
    vector<vector<ll>> graph(n);
    for (ll i = 1; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        graph[a - 1].push_back(b - 1);
        graph[b - 1].push_back(a - 1);
    }
    vector<ll> ans(n, 0);
    ans = v;
    ll neg = 0, pos = 0;
    vector<bool> vis(n, false);
    dfs(0, graph, ans, neg, pos, true, v, vis);
    for (auto &it : ans) cout << it << " ";
    cout << '
';
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}