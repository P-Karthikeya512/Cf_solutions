#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
map<pair<int, int>, int> memo;
 
int f(int l, int r) {
    if (l == r) return l;
    pair<int, int> key = {l, r};
    if (memo.count(key)) return memo[key];
    int b = 0;
    while ((1LL << (b + 1)) <= r) b++;
    if((1LL<<b) <= l) return memo[key] = f(l - (1LL << b), r - (1LL << b)) + (1LL << b);
    else if ((1LL<<(b + 1)) - 1 <= r) return memo[key] = (1LL << (b + 1)) - 1;
    else return memo[key] = (1LL << b) - 1;
}
 
void solve() {
    int l, r;
    cin >> l >> r;
    cout << f(l, r) << endl;
    memo.clear();
}
 
int32_t main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
        memo.clear();
    }
    return 0;
}