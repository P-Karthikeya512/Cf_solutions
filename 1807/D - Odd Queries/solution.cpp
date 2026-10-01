#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,q;
    cin >> n >> q;
    vector<int>v(n),p(n+1,0);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++) p[i+1] += (v[i]+p[i]);
    while(q--){
        int l,r,k;
        cin >> l >> r >> k;
        int sum = (p[n]+p[l-1])+((r-l+1)*k)-(p[r]);
        if(sum & 1) cout << "YES
";
        else cout << "NO
";
    }
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
    while(t--)solve();
    return 0;
}