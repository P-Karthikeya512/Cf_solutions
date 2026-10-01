#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,op=0;
        cin >> n;
        vector<vector<int>>v(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++) cin >> v[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]<0){
                    int ans = abs(v[i][j]);
                    op += ans;
                    for(int k=1;i+k<=n-1 &&j+k<=n-1;k++){
                        v[i+k][j+k] += ans;
                    }
                }
            }
        }
        cout << op << endl;
    }
    return 0;
}
    