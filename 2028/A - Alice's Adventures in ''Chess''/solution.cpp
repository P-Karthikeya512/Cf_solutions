#include <bits/stdc++.h>
using namespace std;
 
void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
bool canMeet(int a, int b, const string &s) {
    int n = s.size(), dx = 0, dy = 0;
    for (char c : s) {
        if (c == 'N') dy++;
        else if (c == 'S') dy--;
        else if (c == 'E') dx++;
        else if (c == 'W') dx--;
    }
    int x = 0, y = 0;
    for (int i = 0; i <= n; ++i) {
        int rx = a - x, ry = b - y;
        if (dx == 0 && dy == 0) {
            if (x == a && y == b) return true;
        } else if (dx == 0) {
            if (rx == 0 && dy != 0 && ry % dy == 0 && ry / dy >= 0) return true;
        } else if (dy == 0) {
            if (ry == 0 && dx != 0 && rx % dx == 0 && rx / dx >= 0) return true;
        } else {
            if (rx % dx == 0 && ry % dy == 0) {
                int kx = rx / dx, ky = ry / dy;
                if (kx == ky && kx >= 0) return true;
            }
        }
        if (i < n) {
            if (s[i] == 'N') y++;
            else if (s[i] == 'S') y--;
            else if (s[i] == 'E') x++;
            else if (s[i] == 'W') x--;
        }
    }
    return false;
}
 
void solve()
{
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if(canMeet(a,b,s)) cout << "YES
";
    else cout << "NO
";
    return ;
}
 
int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}