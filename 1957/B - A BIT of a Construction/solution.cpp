#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long p = 1;
        while(p < k){
            p*=2;
        }
        if(n==1){
            cout << k << endl;
            continue;
        }
        if(p==k){
            cout << p-1 << " " << 1  << " ";
            for(int i=2;i<n;i++){
                cout << 0 << " ";
            }
            cout << '
';
        }
        else{
            p/=2;
            cout << p-1 << " " << k-p+1 << " ";
            for(int i=2;i<n;i++){
                cout << 0 << " ";
            }
            cout << '
';
        }
    }
    return 0;
}