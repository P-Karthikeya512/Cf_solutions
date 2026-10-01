#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> ones(64, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 64; j++) {
            if (a[i] & (1LL << j))
                ones[j]++;
        }
    }
    ll ans = 0;
    for (int k = 0; k < n; k++) {
        ll sum = 0;
        for (int j = 0; j < 64; j++) {
            if (a[k] & (1LL << j)) {
                sum += (n - ones[j]) * (1LL << j);
            } else {
                sum += ones[j] * (1LL << j);
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << "
";
}
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
       solve();
    }
    return 0;
}