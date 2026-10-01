#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n , k,ans = 0;
    cin >> n >> k;
    if(k==1){
        cout << n << endl;
        return;
    }
    while(true){
        ans += n%k;
        n/=k;
        if(n==0) break;
    }
    cout << ans << endl;
}
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int main(){
    fast();
    int t;
    cin >> t;
    while(t--)  solve();
    return 0;
}