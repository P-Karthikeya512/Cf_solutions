#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int j = 0,ans = 0;
    for(int i=0;i<n;i++){
        if(s[j]!=s[i]){
            ans  = max(ans,i-j);
            j = i;
        }
    }
    ans = max(ans,n-j);
    cout << ans+1 << endl; 
}
 
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
int main(){
    fastio();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}