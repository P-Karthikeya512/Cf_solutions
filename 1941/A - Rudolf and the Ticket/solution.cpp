#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >>n >> m >> k;
        int o;
        vector<int>v1(n);
        for(int i=0;i<n;i++) cin >> v1[i];
        int ans = 0;
        for(int i=0;i<m;i++){
            cin >> o;
            for(int j=0;j<n;j++){
                if((o+v1[j]) <= k) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}