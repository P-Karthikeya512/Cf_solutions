#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        int numL = 0;
        for (char c : s) {
            if (c == '<') numL++;
        }
        vector<int> a(n);
        int cur_min = numL + 1;
        int cur_max = numL + 1;
        a[0] = cur_min;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == '<') {
                cur_min--;
                a[i] = cur_min;
            } else {
                cur_max++;
                a[i] = cur_max;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << (i + 1 < n ? ' ' : '
');
        }
    }
    return 0;
}