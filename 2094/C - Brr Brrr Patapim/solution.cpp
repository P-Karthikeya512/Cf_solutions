#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int > > v(n, vector<int>(n));
        vector<int> ans((2*n) + 1, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
                ans[i + j + 2] = v[i][j];
            }
        }
        int m = -1;
        for (int i = 1; i <= 2 * n; i++){
            if (ans[i] == 0) {
                m = i;
            }
        }
        for (int i = 1; i <= 2 * n; i++){
            auto it = find(ans.begin(), ans.end(), i);
            if (it == ans.end()){
                if (m != -1) {
                    ans[m] = i;
                }
            }
        }
        for (int i = 1; i <= 2 * n; i++) {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}