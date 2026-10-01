#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int mod(int x, int m) {
    int r = x % m;
    if (r < 0) r += m;
    return r;
}
 
void solve() {
    int w, h, a, b;
    cin >> w >> h >> a >> b;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int rx1 = mod(x1, a), rx2 = mod(x2, a);
    int ry1 = mod(y1, b), ry2 = mod(y2, b);
    int ix1 = (x1 - rx1) / a;
    int ix2 = (x2 - rx2) / a;
    int iy1 = (y1 - ry1) / b;
    int iy2 = (y2 - ry2) / b;
    bool can_vert = false;
    if(rx1 == rx2) {
        if(ix1 != ix2 || ry1 == ry2)can_vert = true;
    }
    bool can_horiz = false;
    if(ry1 == ry2) {
        if(iy1 != iy2 || rx1 == rx2) can_horiz = true;
    }
    cout << ( (can_vert || can_horiz) ? "Yes
" : "No
" );
}
 
int main() {
    fastio();
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}