#include<bits/stdc++.h>
using namespace std;
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
    int a,b,c;
    cin >> a >> b >>c;
    if(a==b+c || b==c+a || c==a+b ) cout << "YES
";
    else cout << "NO
";
}
 
int main(){
    fast();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}