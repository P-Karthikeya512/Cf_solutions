#include <bits/stdc++.h>
using namespace std;
 
void prep(vector<long long> &nv, vector<long long> &ev, vector<long long> &od,  vector<long long> &ep, vector<long long> &op, int n) {
    ev.clear();
    od.clear();
    for (long long x : nv) {
        if (x % 2 == 0) ev.push_back(x);
        else od.push_back(x);
    }
    sort(ev.rbegin(), ev.rend());
    sort(od.rbegin(), od.rend());
    int ne = ev.size();
    int no = od.size();
    ep.assign(ne + 1, 0);
    op.assign(no + 1, 0);
    for (int i = 1; i <= ne; i++) ep[i] = ep[i - 1] + ev[i - 1];
    for (int i = 1; i <= no; i++) op[i] = op[i - 1] + od[i - 1];
}
 
 
void build(vector<long long> &ev, vector<long long> &od,vector<long long> &ep, vector<long long> &op,vector<vector<pair<long long, int>>> &st, int n) {
    int ne = ev.size();
    int no = od.size();
    st.assign(n + 2, {});
    if (no == 0) return;
    long long lo = od[0];
    for (int x = 0; x <= ne; x++) {
        int cl = 1 + x;
        if (cl > n) break;
        long long cs = lo + ep[x];
        int re = ne - x;
        int ro = no - 1;
        if (ro < 0) continue;
        int lm = (ro % 2 == 0 ? ro : ro - 1);
        if (lm < 0) lm = -1;
        if (re == 0) {
            if (lm >= 0) {
                for (int r = 0; r <= lm; r += 2) {
                    int k = cl + r;
                    if (k > n) break;
                    st[k].push_back({cs, k});
                }
            } else {
                int k = cl;
                if (k <= n) st[k].push_back({cs, k});
            }
        } else {
            int ma = re + (lm >= 0 ? lm : -1);
            if (ma < 0) continue;
            int sk = cl;
            int ek = min(n, cl + ma);
            if (sk <= ek) st[sk].push_back({cs, ek});
        }
    }
}
 
 
void sweep(vector<vector<pair<long long, int>>> &st, vector<long long> &rs, int n) {
    priority_queue<pair<long long, int>> pq;
    rs.assign(n + 1, 0);
    for (int k = 1; k <= n; k++) {
        for (auto &p : st[k]) pq.push(p);
        while (!pq.empty() && pq.top().second < k) pq.pop();
        rs[k] = pq.empty() ? 0 : pq.top().first;
    }
}
 
 
void solve() {
    int n;
    cin >> n;
    vector<long long> nv(n), ev, od, ep, op, rs;
    for (int i = 0; i < n; i++) cin >> nv[i];
    prep(nv, ev, od, ep, op, n);
    if (od.size() == 0) {
        for (int k = 1; k <= n; k++) cout << 0 << (k < n ? " " : "
");
        return;
    }
    vector<vector<pair<long long, int>>> st;
    build(ev, od, ep, op, st, n);
    sweep(st, rs, n);
    for (int k = 1; k <= n; k++) cout << rs[k] << (k < n ? " " : "
");
    return;
}
 
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}