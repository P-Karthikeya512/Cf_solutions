#include<bits/stdc++.h>
using namespace std;
 
void fast(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
 
void solve(){
    int n;
    cin >> n;
    int count2021=n%2020;
    int count2020=(n-count2021)/2020  - count2021;
    if(count2020 >=0 && (2020)*count2020 + (2021)*count2021 == n) cout << "YES
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