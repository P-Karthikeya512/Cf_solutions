#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    long long m,a,b,c;
        cin >> m >> a >> b >> c;
        long long re_r1 = max(0ll,m-a),re_r2 = max(0ll,m-b);
        long long max_seated ;
        max_seated = min(a,m)+min(b,m)+min(c,re_r1+re_r2);
        cout << max_seated << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();    
    return 0;
}