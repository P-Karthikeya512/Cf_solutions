#include <bits/stdc++.h>
using namespace std;
#define int long long
 
long long clog2(long long x) {
    if (x <= 1) return 0;
    return 64 - __builtin_clzll(x - 1);
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;
        long long H1 = min(a, n - a + 1);
        long long W1 = min(b, m - b + 1);
        long long totalA = 1+ clog2(H1)+ clog2(m);
        long long totalB = 1+ clog2(W1)+ clog2(n);
        cout << min(totalA, totalB) << "
";
    }
    return 0;
}