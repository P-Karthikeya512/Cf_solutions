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
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    map<int,int>m;
    for(int i :v) m[i]++;
    bool found = true;
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second > 1){
            found = false;
            break;
        }
    }
    if(found) cout << "YES
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