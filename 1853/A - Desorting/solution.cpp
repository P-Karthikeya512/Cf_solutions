#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,operations=INT_MAX;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n-1;i++){
        if(v[i]> v[i+1]){
            cout << 0 << endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        int a = abs(v[i]-v[i+1]);
        operations = min(operations,a);
    }
    cout << (operations/2)+1 << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}