#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n + 1), dp(n + 1, 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 2*i; j <= n; j += i){
            if(arr[i] < arr[j]) dp[j] = max(dp[j], dp[i] + 1);
        }
    }
    for(int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    cout << ans << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();    
    }
    return 0;
}