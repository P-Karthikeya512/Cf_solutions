#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    vector<int> p(n);
    int idx_max = 0, max_size = -1;
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 0)
                s.insert(a[i][j]);
        }
        if ((int)s.size() > max_size) {
            max_size = s.size();
            idx_max = i;
        }
    }
    for (int j = 0; j < n; j++) {
        if (a[idx_max][j] == 0)
            a[idx_max][j] = n;
    }
    for (int i = 0; i < n; i++) {
        int mx = 0;
        for (int j = 0; j < n; j++)
            mx = max(mx, a[i][j]);
        p[i] = mx;
    }
    for (int x : p) cout << x << " ";
    cout << "
";
    return 0;
}