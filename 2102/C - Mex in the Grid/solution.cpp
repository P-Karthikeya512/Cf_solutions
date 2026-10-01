#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    int ci = (n - 1) / 2;
    int cj = (n - 1) / 2;
    int x = ci, y = cj;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int val = 0;
    grid[x][y] = val++;
    int step = 1;
    while (val < n * n) {
        for (int d = 0; d < 4; ++d) {
            int len = (d % 2 == 0 ? step : step);
            for (int i = 0; i < len && val < n * n; ++i) {
                x += dx[d];
                y += dy[d];
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    grid[x][y] = val++;
                }
            }
            if (d == 1 || d == 3) {
                ++step;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << (j + 1 < n ? ' ' : '
');
        }
    }
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
   int t;
   cin >> t;
   while(t--) solve();
   return 0;
}