#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int ans =0;
    for(int i=n-2;i>=0;i--){
        while(v[i] >= v[i+1] && v[i] > 0){
            v[i]/=2;
            ans++;
        }
        if(v[i]==v[i+1]){
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}