#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=1;i<n;i++){
        if(abs(v[i]-v[i-1])!=5 && abs(v[i]-v[i-1])!=7){
            cout << "NO
";
            return ;
        }
    }
    cout << "YES
";
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
 
    }
}