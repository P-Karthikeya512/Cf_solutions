#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,ans=0;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    if(n==2){
        if(v[0]==0 && v[1]==0) cout << 0 << endl;
        else cout << 1 << endl;    
    }else{
        for (int i = 0; i < n; i++) {
            if (v[i] > 0 && (i == 0 || v[i - 1] == 0)) ans++;
        }
        cout << min(ans,2) << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--)solve();
    return 0;
}