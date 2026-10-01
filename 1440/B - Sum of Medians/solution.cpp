#include<bits/stdc++.h>
using namespace std;
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
    long long n,k;
    cin >> n >> k;
    long long nk = n*k,ans =0;
    vector<long long>v(nk);
    for(int i=0;i<nk;i++) cin >> v[i];
    int j = nk-1;
    while(k--){
        j-=(n/2);
        ans += v[j];
        j=j-1;
    }
    cout << ans << endl;
}
 
int main(){
    fast();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}