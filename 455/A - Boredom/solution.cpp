#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int dfs(int ind, vector<vector<int>> &freq, vector<int> &dp){
    if(ind < 0) return 0;
    if(dp[ind] != -1) return dp[ind];
    int not_take = dfs(ind - 1, freq, dp);
    int take = freq[ind][0] * 1ll * freq[ind][1];
    if(ind > 0 && freq[ind][0] - 1 == freq[ind - 1][0]) take += dfs(ind - 2, freq, dp);
    else take += dfs(ind - 1, freq, dp);
    return dp[ind] = max(take, not_take);
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        vector<vector<int>> freq;
        vector<int> dp(mp.size(), -1);
        for(auto &[k, v] : mp) freq.push_back({k, v});
        cout << dfs(freq.size() - 1, freq, dp) << endl;
    }
    return 0;
}