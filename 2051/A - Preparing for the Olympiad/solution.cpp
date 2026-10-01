#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), u(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> u[i];
        int score1 = 0, score2 = 0;
        for (int i = 0; i < n - 1; i++) {
            if(v[i]<=u[i+1]) continue;
            score1 += v[i];
            score2 += u[i + 1];
        }
        score1 += v[n - 1];
        cout << score1 - score2 << endl;
    }
    return 0;
}