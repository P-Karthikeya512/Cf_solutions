#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,sum0=0;
        cin >> n;
        bool f = false;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            if(x==0) sum0++;
            else if(x>=2) f = true;
        }
        if(sum0<=(n+1)/2) cout << 0 << endl;
        else if(f||sum0==n) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}