#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        bool found = true;
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++){
            if(v[v[i]-1]==i+1){
                found = false;
                break;
            }
        }
        if(found) cout << 3 << endl;
        else cout << 2 << endl;
    }
    return 0;
}