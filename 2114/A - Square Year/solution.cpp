#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int target = stoi(s);
        bool found = false;
        for (int sum = 0; sum <= 99; ++sum) {
            if (sum * sum == target) {
                cout << 0 << ' ' << sum << '
';
                found = true;
                break;
            }
        }
        if (!found)  cout << -1 << '
';
    }
    return 0;
}