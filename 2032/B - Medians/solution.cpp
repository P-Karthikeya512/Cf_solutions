#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if(n==1 && k==1) cout << 1 << endl << 1 << endl;
        else{
            if(k%2==0){
                cout << 3 << endl;
                cout << 1 << " " << k << " " << k+1 << endl;
            }else if(k%2==1 && k!=1 && k!=n){
                cout << 3 << endl;
                cout << 1 << " " << k-1 << " " << k+2 << endl;
            }else cout << -1 << endl;
        }
    }
    return 0;
}