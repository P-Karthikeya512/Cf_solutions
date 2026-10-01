#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int mini=max(v[0],v[1]);
        for(int i=1;i<n-1;i++){
            mini=min(mini,max(v[i],v[i+1]));
        }
        cout << mini-1 << endl;
    }
    return 0;
}