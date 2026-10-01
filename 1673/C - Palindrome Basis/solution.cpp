#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
 
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool palin(int x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}
 
vector<int> str;
int max_n = 4e4;
vector<int> pre, curr;
void gen_palin() {
    for (int i = 1; i <= 40000; i++) {
        if (palin(i)) str.push_back(i);
    }
}
 
void precompute(){
    pre.assign(max_n+1,0);
    curr.assign(max_n+1,0);
    pre[0] = 1;
    for (int i = 0; i < str.size(); i++) {
        curr = pre;
        for (int sum = str[i]; sum <= max_n; sum++) {
            curr[sum] = (curr[sum] + curr[sum - str[i]]) % mod;
        }
        pre = curr;
    }
}
 
void solve() {
    int n;
    cin >> n;
    cout << pre[n] << endl;
    return;
}
 
int32_t main() {
    fastio();
    gen_palin();
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}