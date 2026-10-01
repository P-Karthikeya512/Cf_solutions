#include <bits/stdc++.h>
using namespace std;
 
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
void solve(){
    int n;
    cin >> n;
    vector<long long> a(n+1), b(n+1);
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++) cin >> b[i];
    if(a[n] != b[n]){
        cout << "NO
";
        return;
    }
    bool ok = true;
    for(int i = 1; i < n; i++){
        if(a[i] == b[i]) continue;
        if( (a[i] ^ a[i+1]) == b[i] ) continue;
        else if((a[i] ^ b[i+1]) == b[i]) continue;
        else {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES
" : "NO
");
}
 
int main(){
    fastio();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}