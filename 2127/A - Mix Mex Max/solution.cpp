#include <bits/stdc++.h>
using namespace std;
 
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    map<int, int> freq;
    for(int i = 0; i < n; i++) freq[v[i]]++;
    int maxi = INT_MIN, replace = -1;
    bool hasMinusOne = freq.count(-1);
    for(auto [key, val] : freq) {
        if(key != -1 && val > maxi) {
            maxi = val;
            replace = key;
        }
    }
    if(hasMinusOne) {
        if(freq.size() > 2) {
            for(int &x : v) {
                if(x == -1) x = replace;
            }
            set<int> s(v.begin(), v.end());
            if(s.size() == 1) cout << "YES
";
            else cout << "NO
";
        }
        else if(freq.size() == 2){
            if(replace) cout << "YES
";
            else cout << "NO
";
        }
        else cout << "YES
";
    } 
    else {
        if(freq.size() == 1 and v[0] != 0) cout << "YES
";
        else cout << "NO
";
    }
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