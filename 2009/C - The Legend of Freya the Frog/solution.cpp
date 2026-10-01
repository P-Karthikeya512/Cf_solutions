#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int x,y,k;
    cin >> x >> y >> k;
    int a ,b;
    a =(x%k!=0)?((x/k) +1) :(x/k);
    b =(y%k!=0)?((y/k) +1) :(y/k);
    int c = (2*a)-1,d =2*b;
    cout << max(c,d) << endl;
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
    while(t--) solve();
    return 0;
}