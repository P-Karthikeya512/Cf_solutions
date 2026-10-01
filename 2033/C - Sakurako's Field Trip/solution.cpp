#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,dis = 0;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        if(v[0]!=v[n-1]){
            if(v[0]==v[1] || v[n-1]==v[n-2]) swap(v[0],v[n-1]);
        }
        for(int i=1;i<=n/2;i++){
            if(v[i]!=v[n-i-1]){
                if(v[i-1]==v[i]||v[n-i]==v[n-i-1]) swap(v[i],v[n-i-1]);
            }
        }
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]) dis++;
        }
        cout << dis << endl;
    }
    return 0;
}