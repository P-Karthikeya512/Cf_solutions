#include <bits/stdc++.h>
using namespace std;
#define mii map<int, int>
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map<int,int> f;
        for (char c : s) {
            f[c - '0']++;
        }
        string ans(10, '.');
        for (int i = 0; i < 10; i++) {
            for (int j = 9 - i; j < 10; j++) {
                if (f[j]) {
                    ans[i] = '0' + j;
                    f[j]--;
                    break;
                }
            }
        }
        cout << ans << '
';
    }
 
    return 0;
}