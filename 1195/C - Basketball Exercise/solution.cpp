#include <bits/stdc++.h>
using namespace std;
 
#define int long long
 
int dfs(int ind, int row, vector<vector<int>> &heights, vector<vector<int>> &dp){
    if(ind < 0) return 0;
    if(dp[row][ind] != -1) return dp[row][ind];
    int not_take = dfs(ind - 1, 2, heights, dp);
    int take = 0;
    if(row == 2){
        take = max(heights[1][ind] + dfs(ind - 1, 0, heights, dp), heights[0][ind] + dfs(ind - 1, 1, heights, dp));
    }
    else if(row == 1) take = max(take, heights[1][ind] + dfs(ind - 1, 0, heights, dp));
    else take = max(take, heights[0][ind] + dfs(ind - 1, 1, heights, dp));
    return dp[row][ind] = max(not_take, take);
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector hts(2, vector<int>(n)), dp(3, vector<int>(n, -1));
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++) cin >> hts[i][j];
        }    
        cout << dfs(n - 1, 2, hts, dp) << endl;
    }
    return 0;
}