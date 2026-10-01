#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
const int N = 1e6 + 5;
vector<int> lowBit(N);
 
void clow() {
    for (int i = 1; i < N; i++) {
        if (i % 2 == 1) lowBit[i] = 1;
        else {
            if ((i & (i - 1)) == 0) lowBit[i] = i;
            else {
                int p1 = i, p2 = 1;
                while (p1 > 1 && p1 % 2 == 0) {
                    p2 *= 2;
                    p1 /= 2;
                }
                lowBit[i] = p2;
            }
        }
    }
}
 
void solve() {
    int sum, limit;
    cin >> sum >> limit;
    vector<pair<int, int>> lb;
    for (int i = 1; i <= limit; i++) {
        lb.push_back({lowBit[i], i});
    }
    sort(lb.rbegin(), lb.rend());
    vector<int> ans;
    for (auto [bit, idx] : lb) {
        if (bit <= sum) {
            sum -= bit;
            ans.push_back(idx);
        }
    }
    if (sum == 0) {
        cout << ans.size() << "
";
        for (int i : ans) cout << i << " ";
        cout << "
";
    } 
    else cout << -1 << "
";
}
 
int32_t main() {
    fastio();
    clow();
    solve();
    return 0;
}