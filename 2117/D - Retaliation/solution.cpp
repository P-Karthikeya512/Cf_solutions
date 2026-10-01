#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int k = v[1] - v[0];
    int b = v[0] - k;
    if(b % (n + 1) != 0){
        cout << "NO
";
        return;
    }
    for(int i = 0; i < n; i++){
        if(v[i] != k * (i + 1) + b){
            cout << "NO
";
            return;
        }
    }
    int r = b / (n + 1);
    int l = r + k;
    if(l < 0 || r < 0) cout << "NO
";
    else cout << "YES
";
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0LL;
}