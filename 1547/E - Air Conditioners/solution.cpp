#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> kn(k);
    for(int i = 0; i < k; i++) {
        cin >> kn[i];
        kn[i]--;
    }
    vector<int> temp(n, LLONG_MAX);
    for(int i = 0; i < k; i++) {
        int tmp;
        cin >> tmp;
        temp[kn[i]] = tmp;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(int i = 0; i < k; i++) {
        pq.push({temp[kn[i]], kn[i]});
    }
    vector<int> dx = {-1, 1};
    while(!pq.empty()) {
        auto [cost, node] = pq.top();
        pq.pop();
        for(auto x : dx) {
            int neigh = node + x;
            if(neigh >= 0 && neigh < n) {
                if(cost + 1 < temp[neigh]) {
                    temp[neigh] = cost + 1;
                    pq.push({temp[neigh], neigh});
                }
            }
        }
    }
    for(int i = 0; i < n; i++) cout << temp[i] << ' ';
    cout << endl;
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}