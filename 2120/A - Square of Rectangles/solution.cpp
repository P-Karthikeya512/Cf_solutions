#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool check(int l1, int b1, int l2, int b2, int l3, int b3) {
    if (l1 == l2) {
        int L = l1, B = b1 + b2;
        if ((l3 == L && b3 + B == L) || (b3 == B && l3 + L == B)) return true;
    }
    if (b1 == b2) {
        int B = b1, L = l1 + l2;
        if ((l3 == L && b3 + B == L) || (b3 == B && l3 + L == B)) return true;
    }
    if (l1 == l3) {
        int L = l1, B = b1 + b3;
        if ((l2 == L && b2 + B == L) || (b2 == B && l2 + L == B)) return true;
    }
    if (b1 == b3) {
        int B = b1, L = l1 + l3;
        if ((l2 == L && b2 + B == L) || (b2 == B && l2 + L == B)) return true;
    }
    if (l2 == l3) {
        int L = l2, B = b2 + b3;
        if ((l1 == L && b1 + B == L) || (b1 == B && l1 + L == B)) return true;
    }
    if (b2 == b3) {
        int B = b2, L = l2 + l3;
        if ((l1 == L && b1 + B == L) || (b1 == B && l1 + L == B)) return true;
    }
    return false;
}
 
void solve() {
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    if (check(l1, b1, l2, b2, l3, b3)) cout << "YES
";
    else cout << "NO
";
    return ;
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